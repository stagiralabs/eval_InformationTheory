// Lean compiler output
// Module: Mathlib.Algebra.MvPolynomial.SchwartzZippel
// Imports: Init Mathlib.Algebra.BigOperators.Field Mathlib.Algebra.MvPolynomial.Equiv Mathlib.Algebra.MvPolynomial.Variables Mathlib.Algebra.Order.Group.Finset Mathlib.Algebra.Order.GroupWithZero.Finset Mathlib.Algebra.Order.Ring.Finset Mathlib.Algebra.Polynomial.Roots Mathlib.Data.Fin.Tuple.Finset Mathlib.Tactic.Positivity.Finset
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
static lean_object* l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______macroRules__term___x5e_x5e____1___closed__14;
static lean_object* l_term___x5e_x5e______x40_Mathlib_Algebra_MvPolynomial_SchwartzZippel___hyg_5____closed__24;
static lean_object* l_term___x5e_x5e______x40_Mathlib_Algebra_MvPolynomial_SchwartzZippel___hyg_5____closed__13;
static lean_object* l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______macroRules__term___x5e_x5e____1___closed__12;
uint8_t l_Lean_Syntax_matchesIdent(lean_object*, lean_object*);
static lean_object* l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______macroRules__term___x5e_x5e____1___closed__3;
static lean_object* l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______macroRules__term___x5e_x5e____1___closed__25;
static lean_object* l_term___x5e_x5e______x40_Mathlib_Algebra_MvPolynomial_SchwartzZippel___hyg_5____closed__6;
static lean_object* l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______macroRules__term___x5e_x5e____1___closed__30;
static lean_object* l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______macroRules__term___x5e_x5e____1___closed__4;
static lean_object* l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______unexpand__Fintype__piFinset__1___closed__2;
static lean_object* l_term___x5e_x5e______x40_Mathlib_Algebra_MvPolynomial_SchwartzZippel___hyg_5____closed__7;
static lean_object* l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______macroRules__term___x5e_x5e____1___closed__24;
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______unexpand__Fintype__piFinset__1___boxed(lean_object*, lean_object*, lean_object*);
static lean_object* l_term___x5e_x5e______x40_Mathlib_Algebra_MvPolynomial_SchwartzZippel___hyg_5____closed__2;
static lean_object* l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______macroRules__term___x5e_x5e____1___closed__8;
LEAN_EXPORT lean_object* l_term___x5e_x5e______x40_Mathlib_Algebra_MvPolynomial_SchwartzZippel___hyg_5_;
static lean_object* l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______unexpand__Fintype__piFinset__1___closed__1;
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
static lean_object* l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______macroRules__term___x5e_x5e____1___closed__1;
static lean_object* l_term___x5e_x5e______x40_Mathlib_Algebra_MvPolynomial_SchwartzZippel___hyg_5____closed__4;
static lean_object* l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______macroRules__term___x5e_x5e____1___closed__9;
static lean_object* l_term___x5e_x5e______x40_Mathlib_Algebra_MvPolynomial_SchwartzZippel___hyg_5____closed__22;
static lean_object* l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______macroRules__term___x5e_x5e____1___closed__18;
static lean_object* l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______macroRules__term___x5e_x5e____1___closed__23;
static lean_object* l_term___x5e_x5e______x40_Mathlib_Algebra_MvPolynomial_SchwartzZippel___hyg_5____closed__17;
static lean_object* l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______macroRules__term___x5e_x5e____1___closed__6;
static lean_object* l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______macroRules__term___x5e_x5e____1___closed__19;
static lean_object* l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______macroRules__term___x5e_x5e____1___closed__2;
lean_object* l_Lean_SourceInfo_fromRef(lean_object*, uint8_t);
static lean_object* l_term___x5e_x5e______x40_Mathlib_Algebra_MvPolynomial_SchwartzZippel___hyg_5____closed__23;
static lean_object* l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______macroRules__term___x5e_x5e____1___closed__26;
static lean_object* l_term___x5e_x5e______x40_Mathlib_Algebra_MvPolynomial_SchwartzZippel___hyg_5____closed__12;
LEAN_EXPORT lean_object* l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______macroRules__term___x5e_x5e____1(lean_object*, lean_object*, lean_object*);
static lean_object* l_term___x5e_x5e______x40_Mathlib_Algebra_MvPolynomial_SchwartzZippel___hyg_5____closed__18;
static lean_object* l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______macroRules__term___x5e_x5e____1___closed__20;
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_term___x5e_x5e______x40_Mathlib_Algebra_MvPolynomial_SchwartzZippel___hyg_5____closed__21;
lean_object* l_Lean_addMacroScope(lean_object*, lean_object*, lean_object*);
static lean_object* l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______macroRules__term___x5e_x5e____1___closed__33;
static lean_object* l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______macroRules__term___x5e_x5e____1___closed__16;
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node2(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_term___x5e_x5e______x40_Mathlib_Algebra_MvPolynomial_SchwartzZippel___hyg_5____closed__19;
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
uint8_t l_Lean_Syntax_matchesNull(lean_object*, lean_object*);
static lean_object* l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______macroRules__term___x5e_x5e____1___closed__10;
static lean_object* l_term___x5e_x5e______x40_Mathlib_Algebra_MvPolynomial_SchwartzZippel___hyg_5____closed__11;
static lean_object* l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______macroRules__term___x5e_x5e____1___closed__11;
static lean_object* l_term___x5e_x5e______x40_Mathlib_Algebra_MvPolynomial_SchwartzZippel___hyg_5____closed__10;
lean_object* l_Lean_Syntax_node4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______macroRules__term___x5e_x5e____1___closed__28;
static lean_object* l_term___x5e_x5e______x40_Mathlib_Algebra_MvPolynomial_SchwartzZippel___hyg_5____closed__1;
static lean_object* l_term___x5e_x5e______x40_Mathlib_Algebra_MvPolynomial_SchwartzZippel___hyg_5____closed__14;
static lean_object* l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______macroRules__term___x5e_x5e____1___closed__27;
static lean_object* l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______macroRules__term___x5e_x5e____1___closed__7;
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
static lean_object* l_term___x5e_x5e______x40_Mathlib_Algebra_MvPolynomial_SchwartzZippel___hyg_5____closed__16;
static lean_object* l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______macroRules__term___x5e_x5e____1___closed__29;
static lean_object* l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______macroRules__term___x5e_x5e____1___closed__32;
lean_object* l_Lean_Syntax_node1(lean_object*, lean_object*, lean_object*);
static lean_object* l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______macroRules__term___x5e_x5e____1___closed__22;
static lean_object* l_term___x5e_x5e______x40_Mathlib_Algebra_MvPolynomial_SchwartzZippel___hyg_5____closed__3;
static lean_object* l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______macroRules__term___x5e_x5e____1___closed__15;
static lean_object* l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______macroRules__term___x5e_x5e____1___closed__34;
static lean_object* l_term___x5e_x5e______x40_Mathlib_Algebra_MvPolynomial_SchwartzZippel___hyg_5____closed__5;
static lean_object* l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______macroRules__term___x5e_x5e____1___closed__17;
static lean_object* l_term___x5e_x5e______x40_Mathlib_Algebra_MvPolynomial_SchwartzZippel___hyg_5____closed__9;
static lean_object* l_term___x5e_x5e______x40_Mathlib_Algebra_MvPolynomial_SchwartzZippel___hyg_5____closed__15;
static lean_object* l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______macroRules__term___x5e_x5e____1___closed__13;
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______macroRules__term___x5e_x5e____1___closed__31;
static lean_object* l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______macroRules__term___x5e_x5e____1___closed__5;
LEAN_EXPORT lean_object* l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______unexpand__Fintype__piFinset__1(lean_object*, lean_object*, lean_object*);
static lean_object* l_term___x5e_x5e______x40_Mathlib_Algebra_MvPolynomial_SchwartzZippel___hyg_5____closed__8;
lean_object* l_String_toSubstring_x27(lean_object*);
static lean_object* l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______macroRules__term___x5e_x5e____1___closed__21;
static lean_object* l_term___x5e_x5e______x40_Mathlib_Algebra_MvPolynomial_SchwartzZippel___hyg_5____closed__20;
static lean_object* _init_l_term___x5e_x5e______x40_Mathlib_Algebra_MvPolynomial_SchwartzZippel___hyg_5____closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("term_^^_", 8, 8);
return x_1;
}
}
static lean_object* _init_l_term___x5e_x5e______x40_Mathlib_Algebra_MvPolynomial_SchwartzZippel___hyg_5____closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_term___x5e_x5e______x40_Mathlib_Algebra_MvPolynomial_SchwartzZippel___hyg_5____closed__1;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_term___x5e_x5e______x40_Mathlib_Algebra_MvPolynomial_SchwartzZippel___hyg_5____closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("_@", 2, 2);
return x_1;
}
}
static lean_object* _init_l_term___x5e_x5e______x40_Mathlib_Algebra_MvPolynomial_SchwartzZippel___hyg_5____closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_term___x5e_x5e______x40_Mathlib_Algebra_MvPolynomial_SchwartzZippel___hyg_5____closed__2;
x_2 = l_term___x5e_x5e______x40_Mathlib_Algebra_MvPolynomial_SchwartzZippel___hyg_5____closed__3;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_term___x5e_x5e______x40_Mathlib_Algebra_MvPolynomial_SchwartzZippel___hyg_5____closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Mathlib", 7, 7);
return x_1;
}
}
static lean_object* _init_l_term___x5e_x5e______x40_Mathlib_Algebra_MvPolynomial_SchwartzZippel___hyg_5____closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_term___x5e_x5e______x40_Mathlib_Algebra_MvPolynomial_SchwartzZippel___hyg_5____closed__4;
x_2 = l_term___x5e_x5e______x40_Mathlib_Algebra_MvPolynomial_SchwartzZippel___hyg_5____closed__5;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_term___x5e_x5e______x40_Mathlib_Algebra_MvPolynomial_SchwartzZippel___hyg_5____closed__7() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Algebra", 7, 7);
return x_1;
}
}
static lean_object* _init_l_term___x5e_x5e______x40_Mathlib_Algebra_MvPolynomial_SchwartzZippel___hyg_5____closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_term___x5e_x5e______x40_Mathlib_Algebra_MvPolynomial_SchwartzZippel___hyg_5____closed__6;
x_2 = l_term___x5e_x5e______x40_Mathlib_Algebra_MvPolynomial_SchwartzZippel___hyg_5____closed__7;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_term___x5e_x5e______x40_Mathlib_Algebra_MvPolynomial_SchwartzZippel___hyg_5____closed__9() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("MvPolynomial", 12, 12);
return x_1;
}
}
static lean_object* _init_l_term___x5e_x5e______x40_Mathlib_Algebra_MvPolynomial_SchwartzZippel___hyg_5____closed__10() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_term___x5e_x5e______x40_Mathlib_Algebra_MvPolynomial_SchwartzZippel___hyg_5____closed__8;
x_2 = l_term___x5e_x5e______x40_Mathlib_Algebra_MvPolynomial_SchwartzZippel___hyg_5____closed__9;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_term___x5e_x5e______x40_Mathlib_Algebra_MvPolynomial_SchwartzZippel___hyg_5____closed__11() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("SchwartzZippel", 14, 14);
return x_1;
}
}
static lean_object* _init_l_term___x5e_x5e______x40_Mathlib_Algebra_MvPolynomial_SchwartzZippel___hyg_5____closed__12() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_term___x5e_x5e______x40_Mathlib_Algebra_MvPolynomial_SchwartzZippel___hyg_5____closed__10;
x_2 = l_term___x5e_x5e______x40_Mathlib_Algebra_MvPolynomial_SchwartzZippel___hyg_5____closed__11;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_term___x5e_x5e______x40_Mathlib_Algebra_MvPolynomial_SchwartzZippel___hyg_5____closed__13() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("_hyg", 4, 4);
return x_1;
}
}
static lean_object* _init_l_term___x5e_x5e______x40_Mathlib_Algebra_MvPolynomial_SchwartzZippel___hyg_5____closed__14() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_term___x5e_x5e______x40_Mathlib_Algebra_MvPolynomial_SchwartzZippel___hyg_5____closed__12;
x_2 = l_term___x5e_x5e______x40_Mathlib_Algebra_MvPolynomial_SchwartzZippel___hyg_5____closed__13;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_term___x5e_x5e______x40_Mathlib_Algebra_MvPolynomial_SchwartzZippel___hyg_5____closed__15() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_term___x5e_x5e______x40_Mathlib_Algebra_MvPolynomial_SchwartzZippel___hyg_5____closed__14;
x_2 = lean_unsigned_to_nat(5u);
x_3 = l_Lean_Name_num___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_term___x5e_x5e______x40_Mathlib_Algebra_MvPolynomial_SchwartzZippel___hyg_5____closed__16() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("andthen", 7, 7);
return x_1;
}
}
static lean_object* _init_l_term___x5e_x5e______x40_Mathlib_Algebra_MvPolynomial_SchwartzZippel___hyg_5____closed__17() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_term___x5e_x5e______x40_Mathlib_Algebra_MvPolynomial_SchwartzZippel___hyg_5____closed__16;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_term___x5e_x5e______x40_Mathlib_Algebra_MvPolynomial_SchwartzZippel___hyg_5____closed__18() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked(" ^^ ", 4, 4);
return x_1;
}
}
static lean_object* _init_l_term___x5e_x5e______x40_Mathlib_Algebra_MvPolynomial_SchwartzZippel___hyg_5____closed__19() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_term___x5e_x5e______x40_Mathlib_Algebra_MvPolynomial_SchwartzZippel___hyg_5____closed__18;
x_2 = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_term___x5e_x5e______x40_Mathlib_Algebra_MvPolynomial_SchwartzZippel___hyg_5____closed__20() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("term", 4, 4);
return x_1;
}
}
static lean_object* _init_l_term___x5e_x5e______x40_Mathlib_Algebra_MvPolynomial_SchwartzZippel___hyg_5____closed__21() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_term___x5e_x5e______x40_Mathlib_Algebra_MvPolynomial_SchwartzZippel___hyg_5____closed__20;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_term___x5e_x5e______x40_Mathlib_Algebra_MvPolynomial_SchwartzZippel___hyg_5____closed__22() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_term___x5e_x5e______x40_Mathlib_Algebra_MvPolynomial_SchwartzZippel___hyg_5____closed__21;
x_2 = lean_unsigned_to_nat(71u);
x_3 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_term___x5e_x5e______x40_Mathlib_Algebra_MvPolynomial_SchwartzZippel___hyg_5____closed__23() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_term___x5e_x5e______x40_Mathlib_Algebra_MvPolynomial_SchwartzZippel___hyg_5____closed__17;
x_2 = l_term___x5e_x5e______x40_Mathlib_Algebra_MvPolynomial_SchwartzZippel___hyg_5____closed__19;
x_3 = l_term___x5e_x5e______x40_Mathlib_Algebra_MvPolynomial_SchwartzZippel___hyg_5____closed__22;
x_4 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_term___x5e_x5e______x40_Mathlib_Algebra_MvPolynomial_SchwartzZippel___hyg_5____closed__24() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_term___x5e_x5e______x40_Mathlib_Algebra_MvPolynomial_SchwartzZippel___hyg_5____closed__15;
x_2 = lean_unsigned_to_nat(70u);
x_3 = l_term___x5e_x5e______x40_Mathlib_Algebra_MvPolynomial_SchwartzZippel___hyg_5____closed__23;
x_4 = lean_alloc_ctor(4, 4, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_2);
lean_ctor_set(x_4, 3, x_3);
return x_4;
}
}
static lean_object* _init_l_term___x5e_x5e______x40_Mathlib_Algebra_MvPolynomial_SchwartzZippel___hyg_5_() {
_start:
{
lean_object* x_1; 
x_1 = l_term___x5e_x5e______x40_Mathlib_Algebra_MvPolynomial_SchwartzZippel___hyg_5____closed__24;
return x_1;
}
}
static lean_object* _init_l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______macroRules__term___x5e_x5e____1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Lean", 4, 4);
return x_1;
}
}
static lean_object* _init_l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______macroRules__term___x5e_x5e____1___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Parser", 6, 6);
return x_1;
}
}
static lean_object* _init_l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______macroRules__term___x5e_x5e____1___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Term", 4, 4);
return x_1;
}
}
static lean_object* _init_l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______macroRules__term___x5e_x5e____1___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("app", 3, 3);
return x_1;
}
}
static lean_object* _init_l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______macroRules__term___x5e_x5e____1___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______macroRules__term___x5e_x5e____1___closed__1;
x_2 = l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______macroRules__term___x5e_x5e____1___closed__2;
x_3 = l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______macroRules__term___x5e_x5e____1___closed__3;
x_4 = l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______macroRules__term___x5e_x5e____1___closed__4;
x_5 = l_Lean_Name_mkStr4(x_1, x_2, x_3, x_4);
return x_5;
}
}
static lean_object* _init_l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______macroRules__term___x5e_x5e____1___closed__6() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("piFinset", 8, 8);
return x_1;
}
}
static lean_object* _init_l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______macroRules__term___x5e_x5e____1___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______macroRules__term___x5e_x5e____1___closed__6;
x_2 = l_String_toSubstring_x27(x_1);
return x_2;
}
}
static lean_object* _init_l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______macroRules__term___x5e_x5e____1___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______macroRules__term___x5e_x5e____1___closed__6;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______macroRules__term___x5e_x5e____1___closed__9() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Fintype", 7, 7);
return x_1;
}
}
static lean_object* _init_l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______macroRules__term___x5e_x5e____1___closed__10() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______macroRules__term___x5e_x5e____1___closed__9;
x_2 = l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______macroRules__term___x5e_x5e____1___closed__6;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______macroRules__term___x5e_x5e____1___closed__11() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______macroRules__term___x5e_x5e____1___closed__10;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______macroRules__term___x5e_x5e____1___closed__12() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______macroRules__term___x5e_x5e____1___closed__10;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______macroRules__term___x5e_x5e____1___closed__13() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______macroRules__term___x5e_x5e____1___closed__12;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______macroRules__term___x5e_x5e____1___closed__14() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______macroRules__term___x5e_x5e____1___closed__11;
x_2 = l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______macroRules__term___x5e_x5e____1___closed__13;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______macroRules__term___x5e_x5e____1___closed__15() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("null", 4, 4);
return x_1;
}
}
static lean_object* _init_l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______macroRules__term___x5e_x5e____1___closed__16() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______macroRules__term___x5e_x5e____1___closed__15;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______macroRules__term___x5e_x5e____1___closed__17() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("fun", 3, 3);
return x_1;
}
}
static lean_object* _init_l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______macroRules__term___x5e_x5e____1___closed__18() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______macroRules__term___x5e_x5e____1___closed__1;
x_2 = l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______macroRules__term___x5e_x5e____1___closed__2;
x_3 = l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______macroRules__term___x5e_x5e____1___closed__3;
x_4 = l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______macroRules__term___x5e_x5e____1___closed__17;
x_5 = l_Lean_Name_mkStr4(x_1, x_2, x_3, x_4);
return x_5;
}
}
static lean_object* _init_l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______macroRules__term___x5e_x5e____1___closed__19() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("basicFun", 8, 8);
return x_1;
}
}
static lean_object* _init_l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______macroRules__term___x5e_x5e____1___closed__20() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______macroRules__term___x5e_x5e____1___closed__1;
x_2 = l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______macroRules__term___x5e_x5e____1___closed__2;
x_3 = l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______macroRules__term___x5e_x5e____1___closed__3;
x_4 = l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______macroRules__term___x5e_x5e____1___closed__19;
x_5 = l_Lean_Name_mkStr4(x_1, x_2, x_3, x_4);
return x_5;
}
}
static lean_object* _init_l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______macroRules__term___x5e_x5e____1___closed__21() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("i", 1, 1);
return x_1;
}
}
static lean_object* _init_l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______macroRules__term___x5e_x5e____1___closed__22() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______macroRules__term___x5e_x5e____1___closed__21;
x_2 = l_String_toSubstring_x27(x_1);
return x_2;
}
}
static lean_object* _init_l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______macroRules__term___x5e_x5e____1___closed__23() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______macroRules__term___x5e_x5e____1___closed__21;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______macroRules__term___x5e_x5e____1___closed__24() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("typeSpec", 8, 8);
return x_1;
}
}
static lean_object* _init_l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______macroRules__term___x5e_x5e____1___closed__25() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______macroRules__term___x5e_x5e____1___closed__1;
x_2 = l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______macroRules__term___x5e_x5e____1___closed__2;
x_3 = l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______macroRules__term___x5e_x5e____1___closed__3;
x_4 = l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______macroRules__term___x5e_x5e____1___closed__24;
x_5 = l_Lean_Name_mkStr4(x_1, x_2, x_3, x_4);
return x_5;
}
}
static lean_object* _init_l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______macroRules__term___x5e_x5e____1___closed__26() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked(":", 1, 1);
return x_1;
}
}
static lean_object* _init_l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______macroRules__term___x5e_x5e____1___closed__27() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Fin", 3, 3);
return x_1;
}
}
static lean_object* _init_l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______macroRules__term___x5e_x5e____1___closed__28() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______macroRules__term___x5e_x5e____1___closed__27;
x_2 = l_String_toSubstring_x27(x_1);
return x_2;
}
}
static lean_object* _init_l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______macroRules__term___x5e_x5e____1___closed__29() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______macroRules__term___x5e_x5e____1___closed__27;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______macroRules__term___x5e_x5e____1___closed__30() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______macroRules__term___x5e_x5e____1___closed__29;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______macroRules__term___x5e_x5e____1___closed__31() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______macroRules__term___x5e_x5e____1___closed__29;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______macroRules__term___x5e_x5e____1___closed__32() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______macroRules__term___x5e_x5e____1___closed__31;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______macroRules__term___x5e_x5e____1___closed__33() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______macroRules__term___x5e_x5e____1___closed__30;
x_2 = l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______macroRules__term___x5e_x5e____1___closed__32;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______macroRules__term___x5e_x5e____1___closed__34() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("↦", 3, 1);
return x_1;
}
}
LEAN_EXPORT lean_object* l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______macroRules__term___x5e_x5e____1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = l_term___x5e_x5e______x40_Mathlib_Algebra_MvPolynomial_SchwartzZippel___hyg_5____closed__15;
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
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; 
x_8 = lean_unsigned_to_nat(0u);
x_9 = l_Lean_Syntax_getArg(x_1, x_8);
x_10 = lean_unsigned_to_nat(2u);
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
x_17 = l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______macroRules__term___x5e_x5e____1___closed__8;
lean_inc(x_15);
lean_inc(x_16);
x_18 = l_Lean_addMacroScope(x_16, x_17, x_15);
x_19 = lean_box(0);
x_20 = l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______macroRules__term___x5e_x5e____1___closed__7;
x_21 = l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______macroRules__term___x5e_x5e____1___closed__14;
lean_inc(x_14);
x_22 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_22, 0, x_14);
lean_ctor_set(x_22, 1, x_20);
lean_ctor_set(x_22, 2, x_18);
lean_ctor_set(x_22, 3, x_21);
x_23 = l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______macroRules__term___x5e_x5e____1___closed__17;
lean_inc(x_14);
x_24 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_24, 0, x_14);
lean_ctor_set(x_24, 1, x_23);
x_25 = l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______macroRules__term___x5e_x5e____1___closed__23;
lean_inc(x_15);
lean_inc(x_16);
x_26 = l_Lean_addMacroScope(x_16, x_25, x_15);
x_27 = l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______macroRules__term___x5e_x5e____1___closed__22;
lean_inc(x_14);
x_28 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_28, 0, x_14);
lean_ctor_set(x_28, 1, x_27);
lean_ctor_set(x_28, 2, x_26);
lean_ctor_set(x_28, 3, x_19);
x_29 = l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______macroRules__term___x5e_x5e____1___closed__16;
lean_inc(x_14);
x_30 = l_Lean_Syntax_node1(x_14, x_29, x_28);
x_31 = l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______macroRules__term___x5e_x5e____1___closed__26;
lean_inc(x_14);
x_32 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_32, 0, x_14);
lean_ctor_set(x_32, 1, x_31);
x_33 = l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______macroRules__term___x5e_x5e____1___closed__29;
x_34 = l_Lean_addMacroScope(x_16, x_33, x_15);
x_35 = l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______macroRules__term___x5e_x5e____1___closed__28;
x_36 = l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______macroRules__term___x5e_x5e____1___closed__33;
lean_inc(x_14);
x_37 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_37, 0, x_14);
lean_ctor_set(x_37, 1, x_35);
lean_ctor_set(x_37, 2, x_34);
lean_ctor_set(x_37, 3, x_36);
lean_inc(x_14);
x_38 = l_Lean_Syntax_node1(x_14, x_29, x_11);
x_39 = l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______macroRules__term___x5e_x5e____1___closed__5;
lean_inc(x_14);
x_40 = l_Lean_Syntax_node2(x_14, x_39, x_37, x_38);
x_41 = l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______macroRules__term___x5e_x5e____1___closed__25;
lean_inc(x_14);
x_42 = l_Lean_Syntax_node2(x_14, x_41, x_32, x_40);
lean_inc(x_14);
x_43 = l_Lean_Syntax_node1(x_14, x_29, x_42);
x_44 = l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______macroRules__term___x5e_x5e____1___closed__34;
lean_inc(x_14);
x_45 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_45, 0, x_14);
lean_ctor_set(x_45, 1, x_44);
lean_inc(x_30);
lean_inc(x_14);
x_46 = l_Lean_Syntax_node2(x_14, x_39, x_9, x_30);
x_47 = l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______macroRules__term___x5e_x5e____1___closed__20;
lean_inc(x_14);
x_48 = l_Lean_Syntax_node4(x_14, x_47, x_30, x_43, x_45, x_46);
x_49 = l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______macroRules__term___x5e_x5e____1___closed__18;
lean_inc(x_14);
x_50 = l_Lean_Syntax_node2(x_14, x_49, x_24, x_48);
lean_inc(x_14);
x_51 = l_Lean_Syntax_node1(x_14, x_29, x_50);
x_52 = l_Lean_Syntax_node2(x_14, x_39, x_22, x_51);
x_53 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_53, 0, x_52);
lean_ctor_set(x_53, 1, x_3);
return x_53;
}
}
}
static lean_object* _init_l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______unexpand__Fintype__piFinset__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("ident", 5, 5);
return x_1;
}
}
static lean_object* _init_l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______unexpand__Fintype__piFinset__1___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______unexpand__Fintype__piFinset__1___closed__1;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______unexpand__Fintype__piFinset__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______macroRules__term___x5e_x5e____1___closed__5;
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
x_10 = l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______unexpand__Fintype__piFinset__1___closed__2;
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
lean_object* x_19; lean_object* x_20; uint8_t x_21; 
x_19 = l_Lean_Syntax_getArg(x_15, x_8);
lean_dec(x_15);
x_20 = l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______macroRules__term___x5e_x5e____1___closed__18;
lean_inc(x_19);
x_21 = l_Lean_Syntax_isOfKind(x_19, x_20);
if (x_21 == 0)
{
lean_object* x_22; lean_object* x_23; 
lean_dec(x_19);
lean_dec(x_9);
x_22 = lean_box(0);
x_23 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_23, 0, x_22);
lean_ctor_set(x_23, 1, x_3);
return x_23;
}
else
{
lean_object* x_24; lean_object* x_25; uint8_t x_26; 
x_24 = l_Lean_Syntax_getArg(x_19, x_14);
lean_dec(x_19);
x_25 = l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______macroRules__term___x5e_x5e____1___closed__20;
lean_inc(x_24);
x_26 = l_Lean_Syntax_isOfKind(x_24, x_25);
if (x_26 == 0)
{
lean_object* x_27; lean_object* x_28; 
lean_dec(x_24);
lean_dec(x_9);
x_27 = lean_box(0);
x_28 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_28, 0, x_27);
lean_ctor_set(x_28, 1, x_3);
return x_28;
}
else
{
lean_object* x_29; uint8_t x_30; 
x_29 = l_Lean_Syntax_getArg(x_24, x_8);
lean_inc(x_29);
x_30 = l_Lean_Syntax_matchesNull(x_29, x_14);
if (x_30 == 0)
{
lean_object* x_31; lean_object* x_32; 
lean_dec(x_29);
lean_dec(x_24);
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
x_33 = l_Lean_Syntax_getArg(x_29, x_8);
lean_dec(x_29);
x_34 = l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______macroRules__term___x5e_x5e____1___closed__23;
x_35 = l_Lean_Syntax_matchesIdent(x_33, x_34);
lean_dec(x_33);
if (x_35 == 0)
{
lean_object* x_36; lean_object* x_37; 
lean_dec(x_24);
lean_dec(x_9);
x_36 = lean_box(0);
x_37 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_37, 0, x_36);
lean_ctor_set(x_37, 1, x_3);
return x_37;
}
else
{
lean_object* x_38; uint8_t x_39; 
x_38 = l_Lean_Syntax_getArg(x_24, x_14);
lean_inc(x_38);
x_39 = l_Lean_Syntax_matchesNull(x_38, x_14);
if (x_39 == 0)
{
lean_object* x_40; lean_object* x_41; 
lean_dec(x_38);
lean_dec(x_24);
lean_dec(x_9);
x_40 = lean_box(0);
x_41 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_41, 0, x_40);
lean_ctor_set(x_41, 1, x_3);
return x_41;
}
else
{
lean_object* x_42; lean_object* x_43; uint8_t x_44; 
x_42 = l_Lean_Syntax_getArg(x_38, x_8);
lean_dec(x_38);
x_43 = l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______macroRules__term___x5e_x5e____1___closed__25;
lean_inc(x_42);
x_44 = l_Lean_Syntax_isOfKind(x_42, x_43);
if (x_44 == 0)
{
lean_object* x_45; lean_object* x_46; 
lean_dec(x_42);
lean_dec(x_24);
lean_dec(x_9);
x_45 = lean_box(0);
x_46 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_46, 0, x_45);
lean_ctor_set(x_46, 1, x_3);
return x_46;
}
else
{
lean_object* x_47; uint8_t x_48; 
x_47 = l_Lean_Syntax_getArg(x_42, x_14);
lean_dec(x_42);
lean_inc(x_47);
x_48 = l_Lean_Syntax_isOfKind(x_47, x_4);
if (x_48 == 0)
{
lean_object* x_49; lean_object* x_50; 
lean_dec(x_47);
lean_dec(x_24);
lean_dec(x_9);
x_49 = lean_box(0);
x_50 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_50, 0, x_49);
lean_ctor_set(x_50, 1, x_3);
return x_50;
}
else
{
lean_object* x_51; lean_object* x_52; uint8_t x_53; 
x_51 = l_Lean_Syntax_getArg(x_47, x_8);
x_52 = l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______macroRules__term___x5e_x5e____1___closed__29;
x_53 = l_Lean_Syntax_matchesIdent(x_51, x_52);
lean_dec(x_51);
if (x_53 == 0)
{
lean_object* x_54; lean_object* x_55; 
lean_dec(x_47);
lean_dec(x_24);
lean_dec(x_9);
x_54 = lean_box(0);
x_55 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_55, 0, x_54);
lean_ctor_set(x_55, 1, x_3);
return x_55;
}
else
{
lean_object* x_56; uint8_t x_57; 
x_56 = l_Lean_Syntax_getArg(x_47, x_14);
lean_dec(x_47);
lean_inc(x_56);
x_57 = l_Lean_Syntax_matchesNull(x_56, x_14);
if (x_57 == 0)
{
lean_object* x_58; lean_object* x_59; 
lean_dec(x_56);
lean_dec(x_24);
lean_dec(x_9);
x_58 = lean_box(0);
x_59 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_59, 0, x_58);
lean_ctor_set(x_59, 1, x_3);
return x_59;
}
else
{
lean_object* x_60; lean_object* x_61; lean_object* x_62; uint8_t x_63; 
x_60 = l_Lean_Syntax_getArg(x_56, x_8);
lean_dec(x_56);
x_61 = lean_unsigned_to_nat(3u);
x_62 = l_Lean_Syntax_getArg(x_24, x_61);
lean_dec(x_24);
lean_inc(x_62);
x_63 = l_Lean_Syntax_isOfKind(x_62, x_4);
if (x_63 == 0)
{
lean_object* x_64; lean_object* x_65; 
lean_dec(x_62);
lean_dec(x_60);
lean_dec(x_9);
x_64 = lean_box(0);
x_65 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_65, 0, x_64);
lean_ctor_set(x_65, 1, x_3);
return x_65;
}
else
{
lean_object* x_66; lean_object* x_67; uint8_t x_68; 
x_66 = l_Lean_Syntax_getArg(x_62, x_8);
x_67 = l_Lean_Syntax_getArg(x_62, x_14);
lean_dec(x_62);
lean_inc(x_67);
x_68 = l_Lean_Syntax_matchesNull(x_67, x_14);
if (x_68 == 0)
{
lean_object* x_69; lean_object* x_70; 
lean_dec(x_67);
lean_dec(x_66);
lean_dec(x_60);
lean_dec(x_9);
x_69 = lean_box(0);
x_70 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_70, 0, x_69);
lean_ctor_set(x_70, 1, x_3);
return x_70;
}
else
{
lean_object* x_71; uint8_t x_72; 
x_71 = l_Lean_Syntax_getArg(x_67, x_8);
lean_dec(x_67);
x_72 = l_Lean_Syntax_matchesIdent(x_71, x_34);
lean_dec(x_71);
if (x_72 == 0)
{
lean_object* x_73; lean_object* x_74; 
lean_dec(x_66);
lean_dec(x_60);
lean_dec(x_9);
x_73 = lean_box(0);
x_74 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_74, 0, x_73);
lean_ctor_set(x_74, 1, x_3);
return x_74;
}
else
{
lean_object* x_75; uint8_t x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; 
x_75 = l_Lean_replaceRef(x_9, x_2);
lean_dec(x_9);
x_76 = 0;
x_77 = l_Lean_SourceInfo_fromRef(x_75, x_76);
lean_dec(x_75);
x_78 = l_term___x5e_x5e______x40_Mathlib_Algebra_MvPolynomial_SchwartzZippel___hyg_5____closed__18;
lean_inc(x_77);
x_79 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_79, 0, x_77);
lean_ctor_set(x_79, 1, x_78);
x_80 = l_term___x5e_x5e______x40_Mathlib_Algebra_MvPolynomial_SchwartzZippel___hyg_5____closed__15;
x_81 = l_Lean_Syntax_node3(x_77, x_80, x_66, x_79, x_60);
x_82 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_82, 0, x_81);
lean_ctor_set(x_82, 1, x_3);
return x_82;
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
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______unexpand__Fintype__piFinset__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______unexpand__Fintype__piFinset__1(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_BigOperators_Field(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_MvPolynomial_Equiv(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_MvPolynomial_Variables(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Order_Group_Finset(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Order_GroupWithZero_Finset(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Order_Ring_Finset(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Polynomial_Roots(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Fin_Tuple_Finset(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Tactic_Positivity_Finset(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Algebra_MvPolynomial_SchwartzZippel(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_BigOperators_Field(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_MvPolynomial_Equiv(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_MvPolynomial_Variables(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Order_Group_Finset(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Order_GroupWithZero_Finset(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Order_Ring_Finset(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Polynomial_Roots(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Fin_Tuple_Finset(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Tactic_Positivity_Finset(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_term___x5e_x5e______x40_Mathlib_Algebra_MvPolynomial_SchwartzZippel___hyg_5____closed__1 = _init_l_term___x5e_x5e______x40_Mathlib_Algebra_MvPolynomial_SchwartzZippel___hyg_5____closed__1();
lean_mark_persistent(l_term___x5e_x5e______x40_Mathlib_Algebra_MvPolynomial_SchwartzZippel___hyg_5____closed__1);
l_term___x5e_x5e______x40_Mathlib_Algebra_MvPolynomial_SchwartzZippel___hyg_5____closed__2 = _init_l_term___x5e_x5e______x40_Mathlib_Algebra_MvPolynomial_SchwartzZippel___hyg_5____closed__2();
lean_mark_persistent(l_term___x5e_x5e______x40_Mathlib_Algebra_MvPolynomial_SchwartzZippel___hyg_5____closed__2);
l_term___x5e_x5e______x40_Mathlib_Algebra_MvPolynomial_SchwartzZippel___hyg_5____closed__3 = _init_l_term___x5e_x5e______x40_Mathlib_Algebra_MvPolynomial_SchwartzZippel___hyg_5____closed__3();
lean_mark_persistent(l_term___x5e_x5e______x40_Mathlib_Algebra_MvPolynomial_SchwartzZippel___hyg_5____closed__3);
l_term___x5e_x5e______x40_Mathlib_Algebra_MvPolynomial_SchwartzZippel___hyg_5____closed__4 = _init_l_term___x5e_x5e______x40_Mathlib_Algebra_MvPolynomial_SchwartzZippel___hyg_5____closed__4();
lean_mark_persistent(l_term___x5e_x5e______x40_Mathlib_Algebra_MvPolynomial_SchwartzZippel___hyg_5____closed__4);
l_term___x5e_x5e______x40_Mathlib_Algebra_MvPolynomial_SchwartzZippel___hyg_5____closed__5 = _init_l_term___x5e_x5e______x40_Mathlib_Algebra_MvPolynomial_SchwartzZippel___hyg_5____closed__5();
lean_mark_persistent(l_term___x5e_x5e______x40_Mathlib_Algebra_MvPolynomial_SchwartzZippel___hyg_5____closed__5);
l_term___x5e_x5e______x40_Mathlib_Algebra_MvPolynomial_SchwartzZippel___hyg_5____closed__6 = _init_l_term___x5e_x5e______x40_Mathlib_Algebra_MvPolynomial_SchwartzZippel___hyg_5____closed__6();
lean_mark_persistent(l_term___x5e_x5e______x40_Mathlib_Algebra_MvPolynomial_SchwartzZippel___hyg_5____closed__6);
l_term___x5e_x5e______x40_Mathlib_Algebra_MvPolynomial_SchwartzZippel___hyg_5____closed__7 = _init_l_term___x5e_x5e______x40_Mathlib_Algebra_MvPolynomial_SchwartzZippel___hyg_5____closed__7();
lean_mark_persistent(l_term___x5e_x5e______x40_Mathlib_Algebra_MvPolynomial_SchwartzZippel___hyg_5____closed__7);
l_term___x5e_x5e______x40_Mathlib_Algebra_MvPolynomial_SchwartzZippel___hyg_5____closed__8 = _init_l_term___x5e_x5e______x40_Mathlib_Algebra_MvPolynomial_SchwartzZippel___hyg_5____closed__8();
lean_mark_persistent(l_term___x5e_x5e______x40_Mathlib_Algebra_MvPolynomial_SchwartzZippel___hyg_5____closed__8);
l_term___x5e_x5e______x40_Mathlib_Algebra_MvPolynomial_SchwartzZippel___hyg_5____closed__9 = _init_l_term___x5e_x5e______x40_Mathlib_Algebra_MvPolynomial_SchwartzZippel___hyg_5____closed__9();
lean_mark_persistent(l_term___x5e_x5e______x40_Mathlib_Algebra_MvPolynomial_SchwartzZippel___hyg_5____closed__9);
l_term___x5e_x5e______x40_Mathlib_Algebra_MvPolynomial_SchwartzZippel___hyg_5____closed__10 = _init_l_term___x5e_x5e______x40_Mathlib_Algebra_MvPolynomial_SchwartzZippel___hyg_5____closed__10();
lean_mark_persistent(l_term___x5e_x5e______x40_Mathlib_Algebra_MvPolynomial_SchwartzZippel___hyg_5____closed__10);
l_term___x5e_x5e______x40_Mathlib_Algebra_MvPolynomial_SchwartzZippel___hyg_5____closed__11 = _init_l_term___x5e_x5e______x40_Mathlib_Algebra_MvPolynomial_SchwartzZippel___hyg_5____closed__11();
lean_mark_persistent(l_term___x5e_x5e______x40_Mathlib_Algebra_MvPolynomial_SchwartzZippel___hyg_5____closed__11);
l_term___x5e_x5e______x40_Mathlib_Algebra_MvPolynomial_SchwartzZippel___hyg_5____closed__12 = _init_l_term___x5e_x5e______x40_Mathlib_Algebra_MvPolynomial_SchwartzZippel___hyg_5____closed__12();
lean_mark_persistent(l_term___x5e_x5e______x40_Mathlib_Algebra_MvPolynomial_SchwartzZippel___hyg_5____closed__12);
l_term___x5e_x5e______x40_Mathlib_Algebra_MvPolynomial_SchwartzZippel___hyg_5____closed__13 = _init_l_term___x5e_x5e______x40_Mathlib_Algebra_MvPolynomial_SchwartzZippel___hyg_5____closed__13();
lean_mark_persistent(l_term___x5e_x5e______x40_Mathlib_Algebra_MvPolynomial_SchwartzZippel___hyg_5____closed__13);
l_term___x5e_x5e______x40_Mathlib_Algebra_MvPolynomial_SchwartzZippel___hyg_5____closed__14 = _init_l_term___x5e_x5e______x40_Mathlib_Algebra_MvPolynomial_SchwartzZippel___hyg_5____closed__14();
lean_mark_persistent(l_term___x5e_x5e______x40_Mathlib_Algebra_MvPolynomial_SchwartzZippel___hyg_5____closed__14);
l_term___x5e_x5e______x40_Mathlib_Algebra_MvPolynomial_SchwartzZippel___hyg_5____closed__15 = _init_l_term___x5e_x5e______x40_Mathlib_Algebra_MvPolynomial_SchwartzZippel___hyg_5____closed__15();
lean_mark_persistent(l_term___x5e_x5e______x40_Mathlib_Algebra_MvPolynomial_SchwartzZippel___hyg_5____closed__15);
l_term___x5e_x5e______x40_Mathlib_Algebra_MvPolynomial_SchwartzZippel___hyg_5____closed__16 = _init_l_term___x5e_x5e______x40_Mathlib_Algebra_MvPolynomial_SchwartzZippel___hyg_5____closed__16();
lean_mark_persistent(l_term___x5e_x5e______x40_Mathlib_Algebra_MvPolynomial_SchwartzZippel___hyg_5____closed__16);
l_term___x5e_x5e______x40_Mathlib_Algebra_MvPolynomial_SchwartzZippel___hyg_5____closed__17 = _init_l_term___x5e_x5e______x40_Mathlib_Algebra_MvPolynomial_SchwartzZippel___hyg_5____closed__17();
lean_mark_persistent(l_term___x5e_x5e______x40_Mathlib_Algebra_MvPolynomial_SchwartzZippel___hyg_5____closed__17);
l_term___x5e_x5e______x40_Mathlib_Algebra_MvPolynomial_SchwartzZippel___hyg_5____closed__18 = _init_l_term___x5e_x5e______x40_Mathlib_Algebra_MvPolynomial_SchwartzZippel___hyg_5____closed__18();
lean_mark_persistent(l_term___x5e_x5e______x40_Mathlib_Algebra_MvPolynomial_SchwartzZippel___hyg_5____closed__18);
l_term___x5e_x5e______x40_Mathlib_Algebra_MvPolynomial_SchwartzZippel___hyg_5____closed__19 = _init_l_term___x5e_x5e______x40_Mathlib_Algebra_MvPolynomial_SchwartzZippel___hyg_5____closed__19();
lean_mark_persistent(l_term___x5e_x5e______x40_Mathlib_Algebra_MvPolynomial_SchwartzZippel___hyg_5____closed__19);
l_term___x5e_x5e______x40_Mathlib_Algebra_MvPolynomial_SchwartzZippel___hyg_5____closed__20 = _init_l_term___x5e_x5e______x40_Mathlib_Algebra_MvPolynomial_SchwartzZippel___hyg_5____closed__20();
lean_mark_persistent(l_term___x5e_x5e______x40_Mathlib_Algebra_MvPolynomial_SchwartzZippel___hyg_5____closed__20);
l_term___x5e_x5e______x40_Mathlib_Algebra_MvPolynomial_SchwartzZippel___hyg_5____closed__21 = _init_l_term___x5e_x5e______x40_Mathlib_Algebra_MvPolynomial_SchwartzZippel___hyg_5____closed__21();
lean_mark_persistent(l_term___x5e_x5e______x40_Mathlib_Algebra_MvPolynomial_SchwartzZippel___hyg_5____closed__21);
l_term___x5e_x5e______x40_Mathlib_Algebra_MvPolynomial_SchwartzZippel___hyg_5____closed__22 = _init_l_term___x5e_x5e______x40_Mathlib_Algebra_MvPolynomial_SchwartzZippel___hyg_5____closed__22();
lean_mark_persistent(l_term___x5e_x5e______x40_Mathlib_Algebra_MvPolynomial_SchwartzZippel___hyg_5____closed__22);
l_term___x5e_x5e______x40_Mathlib_Algebra_MvPolynomial_SchwartzZippel___hyg_5____closed__23 = _init_l_term___x5e_x5e______x40_Mathlib_Algebra_MvPolynomial_SchwartzZippel___hyg_5____closed__23();
lean_mark_persistent(l_term___x5e_x5e______x40_Mathlib_Algebra_MvPolynomial_SchwartzZippel___hyg_5____closed__23);
l_term___x5e_x5e______x40_Mathlib_Algebra_MvPolynomial_SchwartzZippel___hyg_5____closed__24 = _init_l_term___x5e_x5e______x40_Mathlib_Algebra_MvPolynomial_SchwartzZippel___hyg_5____closed__24();
lean_mark_persistent(l_term___x5e_x5e______x40_Mathlib_Algebra_MvPolynomial_SchwartzZippel___hyg_5____closed__24);
l_term___x5e_x5e______x40_Mathlib_Algebra_MvPolynomial_SchwartzZippel___hyg_5_ = _init_l_term___x5e_x5e______x40_Mathlib_Algebra_MvPolynomial_SchwartzZippel___hyg_5_();
lean_mark_persistent(l_term___x5e_x5e______x40_Mathlib_Algebra_MvPolynomial_SchwartzZippel___hyg_5_);
l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______macroRules__term___x5e_x5e____1___closed__1 = _init_l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______macroRules__term___x5e_x5e____1___closed__1();
lean_mark_persistent(l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______macroRules__term___x5e_x5e____1___closed__1);
l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______macroRules__term___x5e_x5e____1___closed__2 = _init_l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______macroRules__term___x5e_x5e____1___closed__2();
lean_mark_persistent(l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______macroRules__term___x5e_x5e____1___closed__2);
l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______macroRules__term___x5e_x5e____1___closed__3 = _init_l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______macroRules__term___x5e_x5e____1___closed__3();
lean_mark_persistent(l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______macroRules__term___x5e_x5e____1___closed__3);
l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______macroRules__term___x5e_x5e____1___closed__4 = _init_l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______macroRules__term___x5e_x5e____1___closed__4();
lean_mark_persistent(l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______macroRules__term___x5e_x5e____1___closed__4);
l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______macroRules__term___x5e_x5e____1___closed__5 = _init_l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______macroRules__term___x5e_x5e____1___closed__5();
lean_mark_persistent(l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______macroRules__term___x5e_x5e____1___closed__5);
l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______macroRules__term___x5e_x5e____1___closed__6 = _init_l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______macroRules__term___x5e_x5e____1___closed__6();
lean_mark_persistent(l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______macroRules__term___x5e_x5e____1___closed__6);
l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______macroRules__term___x5e_x5e____1___closed__7 = _init_l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______macroRules__term___x5e_x5e____1___closed__7();
lean_mark_persistent(l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______macroRules__term___x5e_x5e____1___closed__7);
l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______macroRules__term___x5e_x5e____1___closed__8 = _init_l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______macroRules__term___x5e_x5e____1___closed__8();
lean_mark_persistent(l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______macroRules__term___x5e_x5e____1___closed__8);
l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______macroRules__term___x5e_x5e____1___closed__9 = _init_l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______macroRules__term___x5e_x5e____1___closed__9();
lean_mark_persistent(l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______macroRules__term___x5e_x5e____1___closed__9);
l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______macroRules__term___x5e_x5e____1___closed__10 = _init_l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______macroRules__term___x5e_x5e____1___closed__10();
lean_mark_persistent(l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______macroRules__term___x5e_x5e____1___closed__10);
l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______macroRules__term___x5e_x5e____1___closed__11 = _init_l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______macroRules__term___x5e_x5e____1___closed__11();
lean_mark_persistent(l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______macroRules__term___x5e_x5e____1___closed__11);
l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______macroRules__term___x5e_x5e____1___closed__12 = _init_l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______macroRules__term___x5e_x5e____1___closed__12();
lean_mark_persistent(l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______macroRules__term___x5e_x5e____1___closed__12);
l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______macroRules__term___x5e_x5e____1___closed__13 = _init_l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______macroRules__term___x5e_x5e____1___closed__13();
lean_mark_persistent(l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______macroRules__term___x5e_x5e____1___closed__13);
l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______macroRules__term___x5e_x5e____1___closed__14 = _init_l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______macroRules__term___x5e_x5e____1___closed__14();
lean_mark_persistent(l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______macroRules__term___x5e_x5e____1___closed__14);
l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______macroRules__term___x5e_x5e____1___closed__15 = _init_l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______macroRules__term___x5e_x5e____1___closed__15();
lean_mark_persistent(l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______macroRules__term___x5e_x5e____1___closed__15);
l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______macroRules__term___x5e_x5e____1___closed__16 = _init_l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______macroRules__term___x5e_x5e____1___closed__16();
lean_mark_persistent(l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______macroRules__term___x5e_x5e____1___closed__16);
l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______macroRules__term___x5e_x5e____1___closed__17 = _init_l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______macroRules__term___x5e_x5e____1___closed__17();
lean_mark_persistent(l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______macroRules__term___x5e_x5e____1___closed__17);
l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______macroRules__term___x5e_x5e____1___closed__18 = _init_l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______macroRules__term___x5e_x5e____1___closed__18();
lean_mark_persistent(l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______macroRules__term___x5e_x5e____1___closed__18);
l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______macroRules__term___x5e_x5e____1___closed__19 = _init_l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______macroRules__term___x5e_x5e____1___closed__19();
lean_mark_persistent(l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______macroRules__term___x5e_x5e____1___closed__19);
l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______macroRules__term___x5e_x5e____1___closed__20 = _init_l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______macroRules__term___x5e_x5e____1___closed__20();
lean_mark_persistent(l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______macroRules__term___x5e_x5e____1___closed__20);
l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______macroRules__term___x5e_x5e____1___closed__21 = _init_l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______macroRules__term___x5e_x5e____1___closed__21();
lean_mark_persistent(l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______macroRules__term___x5e_x5e____1___closed__21);
l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______macroRules__term___x5e_x5e____1___closed__22 = _init_l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______macroRules__term___x5e_x5e____1___closed__22();
lean_mark_persistent(l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______macroRules__term___x5e_x5e____1___closed__22);
l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______macroRules__term___x5e_x5e____1___closed__23 = _init_l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______macroRules__term___x5e_x5e____1___closed__23();
lean_mark_persistent(l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______macroRules__term___x5e_x5e____1___closed__23);
l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______macroRules__term___x5e_x5e____1___closed__24 = _init_l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______macroRules__term___x5e_x5e____1___closed__24();
lean_mark_persistent(l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______macroRules__term___x5e_x5e____1___closed__24);
l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______macroRules__term___x5e_x5e____1___closed__25 = _init_l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______macroRules__term___x5e_x5e____1___closed__25();
lean_mark_persistent(l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______macroRules__term___x5e_x5e____1___closed__25);
l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______macroRules__term___x5e_x5e____1___closed__26 = _init_l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______macroRules__term___x5e_x5e____1___closed__26();
lean_mark_persistent(l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______macroRules__term___x5e_x5e____1___closed__26);
l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______macroRules__term___x5e_x5e____1___closed__27 = _init_l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______macroRules__term___x5e_x5e____1___closed__27();
lean_mark_persistent(l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______macroRules__term___x5e_x5e____1___closed__27);
l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______macroRules__term___x5e_x5e____1___closed__28 = _init_l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______macroRules__term___x5e_x5e____1___closed__28();
lean_mark_persistent(l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______macroRules__term___x5e_x5e____1___closed__28);
l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______macroRules__term___x5e_x5e____1___closed__29 = _init_l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______macroRules__term___x5e_x5e____1___closed__29();
lean_mark_persistent(l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______macroRules__term___x5e_x5e____1___closed__29);
l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______macroRules__term___x5e_x5e____1___closed__30 = _init_l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______macroRules__term___x5e_x5e____1___closed__30();
lean_mark_persistent(l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______macroRules__term___x5e_x5e____1___closed__30);
l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______macroRules__term___x5e_x5e____1___closed__31 = _init_l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______macroRules__term___x5e_x5e____1___closed__31();
lean_mark_persistent(l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______macroRules__term___x5e_x5e____1___closed__31);
l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______macroRules__term___x5e_x5e____1___closed__32 = _init_l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______macroRules__term___x5e_x5e____1___closed__32();
lean_mark_persistent(l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______macroRules__term___x5e_x5e____1___closed__32);
l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______macroRules__term___x5e_x5e____1___closed__33 = _init_l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______macroRules__term___x5e_x5e____1___closed__33();
lean_mark_persistent(l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______macroRules__term___x5e_x5e____1___closed__33);
l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______macroRules__term___x5e_x5e____1___closed__34 = _init_l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______macroRules__term___x5e_x5e____1___closed__34();
lean_mark_persistent(l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______macroRules__term___x5e_x5e____1___closed__34);
l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______unexpand__Fintype__piFinset__1___closed__1 = _init_l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______unexpand__Fintype__piFinset__1___closed__1();
lean_mark_persistent(l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______unexpand__Fintype__piFinset__1___closed__1);
l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______unexpand__Fintype__piFinset__1___closed__2 = _init_l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______unexpand__Fintype__piFinset__1___closed__2();
lean_mark_persistent(l___aux__Mathlib__Algebra__MvPolynomial__SchwartzZippel______unexpand__Fintype__piFinset__1___closed__2);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
