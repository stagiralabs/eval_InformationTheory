// Lean compiler output
// Module: Mathlib.Algebra.Polynomial.Basic
// Imports: Init Mathlib.Algebra.GroupWithZero.Divisibility Mathlib.Algebra.Order.Monoid.Unbundled.WithTop Mathlib.Data.Finset.Sort Mathlib.Tactic.FastInstance Mathlib.Algebra.Group.Submonoid.Operations Mathlib.Algebra.MonoidAlgebra.Defs
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
uint8_t l_Finsupp_instDecidableEq___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Polynomial_repr___rarg___closed__9;
LEAN_EXPORT lean_object* l_Polynomial_support___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Multiset_sort___at_Polynomial_repr___spec__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_decidableEq___at_Polynomial_instDecidableEq___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_Polynomial_toFinsuppIsoLinear___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Multiset_sort___at_Polynomial_repr___spec__4___rarg(lean_object*);
LEAN_EXPORT uint8_t l_Equiv_decidableEq___at_Polynomial_instDecidableEq___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Algebra_Polynomial_Basic_0__Polynomial_support_match__1_splitter(lean_object*, lean_object*, lean_object*);
static lean_object* l_List_mapTR_loop___at_Polynomial_repr___spec__5___rarg___closed__8;
LEAN_EXPORT lean_object* l_Nat_cast___at_Polynomial_repr___spec__1(lean_object*);
static lean_object* l_Polynomial_repr___rarg___closed__8;
static lean_object* l_Polynomial_term___x5bX_x5d___closed__6;
static lean_object* l_Polynomial___aux__Mathlib__Algebra__Polynomial__Basic______macroRules__Polynomial__term___x5bX_x5d__1___closed__5;
LEAN_EXPORT lean_object* l_Polynomial___aux__Mathlib__Algebra__Polynomial__Basic______unexpand__Polynomial__1___boxed(lean_object*, lean_object*, lean_object*);
static lean_object* l_Polynomial_repr___rarg___closed__5;
LEAN_EXPORT lean_object* l_Polynomial_coeff___rarg(lean_object*, lean_object*);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Polynomial_instDecidableEq(lean_object*);
static lean_object* l_List_mapTR_loop___at_Polynomial_repr___spec__5___rarg___closed__10;
LEAN_EXPORT uint8_t l_Function_Injective_decidableEq___at_Polynomial_instDecidableEq___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Polynomial_repr___rarg___closed__2;
lean_object* l_List_MergeSort_Internal_mergeSortTR_u2082___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Polynomial_sum(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Multiset_sum___rarg(lean_object*, lean_object*);
static lean_object* l_Polynomial___aux__Mathlib__Algebra__Polynomial__Basic______macroRules__Polynomial__term___x5bX_x5d__1___closed__13;
LEAN_EXPORT lean_object* l_Nat_cast___at_Polynomial_repr___spec__2___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Function_Injective_decidableEq___at_Polynomial_instDecidableEq___spec__2___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Semiring_toNonAssocSemiring___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Polynomial_repr___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Polynomial_toFinsuppIso___lambda__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Nat_cast___at_Polynomial_repr___spec__2(lean_object*);
static lean_object* l_Multiset_sort___at_Polynomial_repr___spec__4___rarg___closed__1;
static lean_object* l_Polynomial_repr___rarg___closed__11;
LEAN_EXPORT lean_object* l_Polynomial_sum___rarg(lean_object*, lean_object*, lean_object*);
static lean_object* l_Polynomial___aux__Mathlib__Algebra__Polynomial__Basic______macroRules__Polynomial__term___x5bX_x5d__1___closed__12;
lean_object* l_Multiset_map___rarg(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Polynomial_instDecidableEq___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_SourceInfo_fromRef(lean_object*, uint8_t);
lean_object* lean_nat_to_int(lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at_Polynomial_repr___spec__5___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Polynomial_term___x5bX_x5d___closed__1;
LEAN_EXPORT lean_object* l_Function_Injective_decidableEq___at_Polynomial_instDecidableEq___spec__2___boxed(lean_object*, lean_object*);
static lean_object* l_Polynomial___aux__Mathlib__Algebra__Polynomial__Basic______macroRules__Polynomial__term___x5bX_x5d__1___closed__1;
LEAN_EXPORT lean_object* l_Polynomial___aux__Mathlib__Algebra__Polynomial__Basic______macroRules__Polynomial__term___x5bX_x5d__1(lean_object*, lean_object*, lean_object*);
static lean_object* l_Polynomial___aux__Mathlib__Algebra__Polynomial__Basic______macroRules__Polynomial__term___x5bX_x5d__1___closed__8;
LEAN_EXPORT lean_object* l_Polynomial_toFinsuppIsoLinear___elambda__1___boxed(lean_object*, lean_object*);
static lean_object* l_List_mapTR_loop___at_Polynomial_repr___spec__5___rarg___closed__9;
LEAN_EXPORT lean_object* l_List_mapTR_loop___at_Polynomial_repr___spec__5___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_NonAssocSemiring_toAddCommMonoidWithOne___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Polynomial_coeff(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_Polynomial_toFinsuppIsoLinear___spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Polynomial_toFinsuppIsoLinear___elambda__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Polynomial_sum___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_sort___at_Polynomial_repr___spec__3(lean_object*, lean_object*, lean_object*);
static lean_object* l_List_mapTR_loop___at_Polynomial_repr___spec__5___rarg___closed__5;
lean_object* l_Lean_addMacroScope(lean_object*, lean_object*, lean_object*);
static lean_object* l_List_mapTR_loop___at_Polynomial_repr___spec__5___rarg___closed__7;
LEAN_EXPORT lean_object* l_RingHom_id___at_Polynomial_toFinsuppIsoLinear___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Polynomial_sum___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Polynomial_toFinsuppIsoLinear___rarg(lean_object*);
lean_object* l_Lean_Syntax_node2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_decidableEq___at_Polynomial_instDecidableEq___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
uint8_t l_Lean_Syntax_matchesNull(lean_object*, lean_object*);
static lean_object* l_List_mapTR_loop___at_Polynomial_repr___spec__5___rarg___closed__11;
LEAN_EXPORT lean_object* l___private_Mathlib_Algebra_Polynomial_Basic_0__Polynomial_support_match__1_splitter___rarg(lean_object*, lean_object*);
static lean_object* l_Polynomial___aux__Mathlib__Algebra__Polynomial__Basic______macroRules__Polynomial__term___x5bX_x5d__1___closed__9;
static lean_object* l_List_mapTR_loop___at_Polynomial_repr___spec__5___rarg___closed__6;
LEAN_EXPORT lean_object* l_Polynomial_repr___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Polynomial___aux__Mathlib__Algebra__Polynomial__Basic______macroRules__Polynomial__term___x5bX_x5d__1___closed__7;
LEAN_EXPORT lean_object* l_Polynomial_instDecidableEq___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Polynomial_toFinsuppIso(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Polynomial_toFinsuppIso___lambda__1(lean_object*);
LEAN_EXPORT lean_object* l_Polynomial_toFinsuppIsoLinear___elambda__1(lean_object*, lean_object*);
static lean_object* l_Polynomial___aux__Mathlib__Algebra__Polynomial__Basic______macroRules__Polynomial__term___x5bX_x5d__1___closed__4;
lean_object* l_WithTop_decidableLE___rarg(lean_object*, lean_object*, lean_object*);
static lean_object* l_Polynomial_repr___rarg___closed__6;
LEAN_EXPORT lean_object* l_Polynomial_support___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Polynomial_repr(lean_object*);
LEAN_EXPORT lean_object* l_Finset_sum___at_Polynomial_sum___spec__1(lean_object*);
static lean_object* l_Polynomial___aux__Mathlib__Algebra__Polynomial__Basic______macroRules__Polynomial__term___x5bX_x5d__1___closed__6;
static lean_object* l_Polynomial___aux__Mathlib__Algebra__Polynomial__Basic______macroRules__Polynomial__term___x5bX_x5d__1___closed__2;
static lean_object* l_Polynomial___aux__Mathlib__Algebra__Polynomial__Basic______macroRules__Polynomial__term___x5bX_x5d__1___closed__3;
static lean_object* l_List_mapTR_loop___at_Polynomial_repr___spec__5___rarg___closed__3;
static lean_object* l_Polynomial_repr___rarg___closed__10;
static lean_object* l_Polynomial_repr___rarg___closed__1;
static lean_object* l_Polynomial_toFinsuppIso___closed__2;
lean_object* lean_string_length(lean_object*);
lean_object* l_Nat_decLe___boxed(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
static lean_object* l_Polynomial_repr___rarg___closed__7;
lean_object* l_id___rarg___boxed(lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
static lean_object* l_RingHom_id___at_Polynomial_toFinsuppIsoLinear___spec__1___closed__1;
static lean_object* l_Polynomial_repr___rarg___closed__4;
lean_object* l_Lean_Syntax_node1(lean_object*, lean_object*, lean_object*);
static lean_object* l_List_mapTR_loop___at_Polynomial_repr___spec__5___rarg___closed__4;
lean_object* l_Std_Format_joinSep___at_Prod_repr___spec__1(lean_object*, lean_object*);
static lean_object* l_Polynomial___aux__Mathlib__Algebra__Polynomial__Basic______macroRules__Polynomial__term___x5bX_x5d__1___closed__10;
static lean_object* l_Polynomial_term___x5bX_x5d___closed__3;
LEAN_EXPORT lean_object* l_List_mapTR_loop___at_Polynomial_repr___spec__5(lean_object*);
LEAN_EXPORT lean_object* l_Polynomial___aux__Mathlib__Algebra__Polynomial__Basic______unexpand__Polynomial__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Function_Injective_decidableEq___at_Polynomial_instDecidableEq___spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Polynomial_coeff___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Polynomial_toFinsuppIsoLinear(lean_object*);
LEAN_EXPORT lean_object* l_Finset_sum___at_Polynomial_sum___spec__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at_Polynomial_repr___spec__6(lean_object*, lean_object*);
lean_object* l_List_reverse___rarg(lean_object*);
static lean_object* l_Polynomial___aux__Mathlib__Algebra__Polynomial__Basic______macroRules__Polynomial__term___x5bX_x5d__1___closed__11;
LEAN_EXPORT lean_object* l_Finset_sort___at_Polynomial_repr___spec__3___rarg(lean_object*);
static lean_object* l_Polynomial_toFinsuppIso___closed__1;
static lean_object* l_Polynomial_term___x5bX_x5d___closed__4;
LEAN_EXPORT lean_object* l_Polynomial_term___x5bX_x5d;
static lean_object* l_List_mapTR_loop___at_Polynomial_repr___spec__5___rarg___closed__2;
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instDecidableEqNat___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Polynomial_support(lean_object*, lean_object*);
static lean_object* l_Polynomial_repr___rarg___closed__3;
LEAN_EXPORT lean_object* l_Polynomial_support___rarg(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
static lean_object* l_Polynomial___aux__Mathlib__Algebra__Polynomial__Basic______unexpand__Polynomial__1___closed__2;
LEAN_EXPORT lean_object* l_Polynomial_toFinsuppIso___boxed(lean_object*, lean_object*);
lean_object* l_String_toSubstring_x27(lean_object*);
static lean_object* l_Polynomial_term___x5bX_x5d___closed__2;
lean_object* l___private_Init_Data_Repr_0__Nat_reprFast(lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Algebra_Polynomial_Basic_0__Polynomial_support_match__1_splitter___boxed(lean_object*, lean_object*, lean_object*);
static lean_object* l_Function_Injective_decidableEq___at_Polynomial_instDecidableEq___spec__2___rarg___closed__1;
static lean_object* l_List_mapTR_loop___at_Polynomial_repr___spec__5___rarg___closed__1;
static lean_object* l_Polynomial___aux__Mathlib__Algebra__Polynomial__Basic______unexpand__Polynomial__1___closed__1;
static lean_object* l_Polynomial_term___x5bX_x5d___closed__5;
static lean_object* _init_l_Polynomial_term___x5bX_x5d___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Polynomial", 10, 10);
return x_1;
}
}
static lean_object* _init_l_Polynomial_term___x5bX_x5d___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("term_[X]", 8, 8);
return x_1;
}
}
static lean_object* _init_l_Polynomial_term___x5bX_x5d___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Polynomial_term___x5bX_x5d___closed__1;
x_2 = l_Polynomial_term___x5bX_x5d___closed__2;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Polynomial_term___x5bX_x5d___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("[X]", 3, 3);
return x_1;
}
}
static lean_object* _init_l_Polynomial_term___x5bX_x5d___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Polynomial_term___x5bX_x5d___closed__4;
x_2 = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Polynomial_term___x5bX_x5d___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l_Polynomial_term___x5bX_x5d___closed__3;
x_2 = lean_unsigned_to_nat(9000u);
x_3 = lean_unsigned_to_nat(0u);
x_4 = l_Polynomial_term___x5bX_x5d___closed__5;
x_5 = lean_alloc_ctor(4, 4, 0);
lean_ctor_set(x_5, 0, x_1);
lean_ctor_set(x_5, 1, x_2);
lean_ctor_set(x_5, 2, x_3);
lean_ctor_set(x_5, 3, x_4);
return x_5;
}
}
static lean_object* _init_l_Polynomial_term___x5bX_x5d() {
_start:
{
lean_object* x_1; 
x_1 = l_Polynomial_term___x5bX_x5d___closed__6;
return x_1;
}
}
static lean_object* _init_l_Polynomial___aux__Mathlib__Algebra__Polynomial__Basic______macroRules__Polynomial__term___x5bX_x5d__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Lean", 4, 4);
return x_1;
}
}
static lean_object* _init_l_Polynomial___aux__Mathlib__Algebra__Polynomial__Basic______macroRules__Polynomial__term___x5bX_x5d__1___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Parser", 6, 6);
return x_1;
}
}
static lean_object* _init_l_Polynomial___aux__Mathlib__Algebra__Polynomial__Basic______macroRules__Polynomial__term___x5bX_x5d__1___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Term", 4, 4);
return x_1;
}
}
static lean_object* _init_l_Polynomial___aux__Mathlib__Algebra__Polynomial__Basic______macroRules__Polynomial__term___x5bX_x5d__1___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("app", 3, 3);
return x_1;
}
}
static lean_object* _init_l_Polynomial___aux__Mathlib__Algebra__Polynomial__Basic______macroRules__Polynomial__term___x5bX_x5d__1___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l_Polynomial___aux__Mathlib__Algebra__Polynomial__Basic______macroRules__Polynomial__term___x5bX_x5d__1___closed__1;
x_2 = l_Polynomial___aux__Mathlib__Algebra__Polynomial__Basic______macroRules__Polynomial__term___x5bX_x5d__1___closed__2;
x_3 = l_Polynomial___aux__Mathlib__Algebra__Polynomial__Basic______macroRules__Polynomial__term___x5bX_x5d__1___closed__3;
x_4 = l_Polynomial___aux__Mathlib__Algebra__Polynomial__Basic______macroRules__Polynomial__term___x5bX_x5d__1___closed__4;
x_5 = l_Lean_Name_mkStr4(x_1, x_2, x_3, x_4);
return x_5;
}
}
static lean_object* _init_l_Polynomial___aux__Mathlib__Algebra__Polynomial__Basic______macroRules__Polynomial__term___x5bX_x5d__1___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Polynomial_term___x5bX_x5d___closed__1;
x_2 = l_String_toSubstring_x27(x_1);
return x_2;
}
}
static lean_object* _init_l_Polynomial___aux__Mathlib__Algebra__Polynomial__Basic______macroRules__Polynomial__term___x5bX_x5d__1___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Polynomial_term___x5bX_x5d___closed__1;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Polynomial___aux__Mathlib__Algebra__Polynomial__Basic______macroRules__Polynomial__term___x5bX_x5d__1___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Polynomial___aux__Mathlib__Algebra__Polynomial__Basic______macroRules__Polynomial__term___x5bX_x5d__1___closed__7;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_l_Polynomial___aux__Mathlib__Algebra__Polynomial__Basic______macroRules__Polynomial__term___x5bX_x5d__1___closed__9() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Polynomial___aux__Mathlib__Algebra__Polynomial__Basic______macroRules__Polynomial__term___x5bX_x5d__1___closed__7;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Polynomial___aux__Mathlib__Algebra__Polynomial__Basic______macroRules__Polynomial__term___x5bX_x5d__1___closed__10() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Polynomial___aux__Mathlib__Algebra__Polynomial__Basic______macroRules__Polynomial__term___x5bX_x5d__1___closed__9;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_l_Polynomial___aux__Mathlib__Algebra__Polynomial__Basic______macroRules__Polynomial__term___x5bX_x5d__1___closed__11() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Polynomial___aux__Mathlib__Algebra__Polynomial__Basic______macroRules__Polynomial__term___x5bX_x5d__1___closed__8;
x_2 = l_Polynomial___aux__Mathlib__Algebra__Polynomial__Basic______macroRules__Polynomial__term___x5bX_x5d__1___closed__10;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Polynomial___aux__Mathlib__Algebra__Polynomial__Basic______macroRules__Polynomial__term___x5bX_x5d__1___closed__12() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("null", 4, 4);
return x_1;
}
}
static lean_object* _init_l_Polynomial___aux__Mathlib__Algebra__Polynomial__Basic______macroRules__Polynomial__term___x5bX_x5d__1___closed__13() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Polynomial___aux__Mathlib__Algebra__Polynomial__Basic______macroRules__Polynomial__term___x5bX_x5d__1___closed__12;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Polynomial___aux__Mathlib__Algebra__Polynomial__Basic______macroRules__Polynomial__term___x5bX_x5d__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = l_Polynomial_term___x5bX_x5d___closed__3;
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
lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_8 = lean_unsigned_to_nat(0u);
x_9 = l_Lean_Syntax_getArg(x_1, x_8);
lean_dec(x_1);
x_10 = lean_ctor_get(x_2, 5);
lean_inc(x_10);
x_11 = 0;
x_12 = l_Lean_SourceInfo_fromRef(x_10, x_11);
lean_dec(x_10);
x_13 = lean_ctor_get(x_2, 2);
lean_inc(x_13);
x_14 = lean_ctor_get(x_2, 1);
lean_inc(x_14);
lean_dec(x_2);
x_15 = l_Polynomial___aux__Mathlib__Algebra__Polynomial__Basic______macroRules__Polynomial__term___x5bX_x5d__1___closed__7;
x_16 = l_Lean_addMacroScope(x_14, x_15, x_13);
x_17 = l_Polynomial___aux__Mathlib__Algebra__Polynomial__Basic______macroRules__Polynomial__term___x5bX_x5d__1___closed__6;
x_18 = l_Polynomial___aux__Mathlib__Algebra__Polynomial__Basic______macroRules__Polynomial__term___x5bX_x5d__1___closed__11;
lean_inc(x_12);
x_19 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_19, 0, x_12);
lean_ctor_set(x_19, 1, x_17);
lean_ctor_set(x_19, 2, x_16);
lean_ctor_set(x_19, 3, x_18);
x_20 = l_Polynomial___aux__Mathlib__Algebra__Polynomial__Basic______macroRules__Polynomial__term___x5bX_x5d__1___closed__13;
lean_inc(x_12);
x_21 = l_Lean_Syntax_node1(x_12, x_20, x_9);
x_22 = l_Polynomial___aux__Mathlib__Algebra__Polynomial__Basic______macroRules__Polynomial__term___x5bX_x5d__1___closed__5;
x_23 = l_Lean_Syntax_node2(x_12, x_22, x_19, x_21);
x_24 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_24, 0, x_23);
lean_ctor_set(x_24, 1, x_3);
return x_24;
}
}
}
static lean_object* _init_l_Polynomial___aux__Mathlib__Algebra__Polynomial__Basic______unexpand__Polynomial__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("ident", 5, 5);
return x_1;
}
}
static lean_object* _init_l_Polynomial___aux__Mathlib__Algebra__Polynomial__Basic______unexpand__Polynomial__1___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Polynomial___aux__Mathlib__Algebra__Polynomial__Basic______unexpand__Polynomial__1___closed__1;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Polynomial___aux__Mathlib__Algebra__Polynomial__Basic______unexpand__Polynomial__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = l_Polynomial___aux__Mathlib__Algebra__Polynomial__Basic______macroRules__Polynomial__term___x5bX_x5d__1___closed__5;
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
x_10 = l_Polynomial___aux__Mathlib__Algebra__Polynomial__Basic______unexpand__Polynomial__1___closed__2;
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
lean_object* x_19; lean_object* x_20; uint8_t x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_19 = l_Lean_Syntax_getArg(x_15, x_8);
lean_dec(x_15);
x_20 = l_Lean_replaceRef(x_9, x_2);
lean_dec(x_9);
x_21 = 0;
x_22 = l_Lean_SourceInfo_fromRef(x_20, x_21);
lean_dec(x_20);
x_23 = l_Polynomial_term___x5bX_x5d___closed__4;
lean_inc(x_22);
x_24 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_24, 0, x_22);
lean_ctor_set(x_24, 1, x_23);
x_25 = l_Polynomial_term___x5bX_x5d___closed__3;
x_26 = l_Lean_Syntax_node2(x_22, x_25, x_19, x_24);
x_27 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_27, 0, x_26);
lean_ctor_set(x_27, 1, x_3);
return x_27;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Polynomial___aux__Mathlib__Algebra__Polynomial__Basic______unexpand__Polynomial__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Polynomial___aux__Mathlib__Algebra__Polynomial__Basic______unexpand__Polynomial__1(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Polynomial_toFinsuppIso___lambda__1(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
static lean_object* _init_l_Polynomial_toFinsuppIso___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Polynomial_toFinsuppIso___lambda__1___boxed), 1, 0);
return x_1;
}
}
static lean_object* _init_l_Polynomial_toFinsuppIso___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Polynomial_toFinsuppIso___closed__1;
x_2 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_2, 0, x_1);
lean_ctor_set(x_2, 1, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Polynomial_toFinsuppIso(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Polynomial_toFinsuppIso___closed__2;
return x_3;
}
}
LEAN_EXPORT lean_object* l_Polynomial_toFinsuppIso___lambda__1___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Polynomial_toFinsuppIso___lambda__1(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Polynomial_toFinsuppIso___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Polynomial_toFinsuppIso(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
static lean_object* _init_l_Function_Injective_decidableEq___at_Polynomial_instDecidableEq___spec__2___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_instDecidableEqNat___boxed), 2, 0);
return x_1;
}
}
LEAN_EXPORT uint8_t l_Function_Injective_decidableEq___at_Polynomial_instDecidableEq___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_6 = lean_ctor_get(x_2, 0);
lean_inc(x_6);
lean_dec(x_2);
lean_inc(x_6);
x_7 = lean_apply_1(x_6, x_4);
x_8 = lean_apply_1(x_6, x_5);
x_9 = l_Function_Injective_decidableEq___at_Polynomial_instDecidableEq___spec__2___rarg___closed__1;
x_10 = l_Finsupp_instDecidableEq___rarg(x_9, x_1, x_7, x_8);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Function_Injective_decidableEq___at_Polynomial_instDecidableEq___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Function_Injective_decidableEq___at_Polynomial_instDecidableEq___spec__2___rarg___boxed), 5, 0);
return x_3;
}
}
LEAN_EXPORT uint8_t l_Equiv_decidableEq___at_Polynomial_instDecidableEq___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; 
x_6 = l_Function_Injective_decidableEq___at_Polynomial_instDecidableEq___spec__2___rarg(x_2, x_3, lean_box(0), x_4, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Equiv_decidableEq___at_Polynomial_instDecidableEq___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Equiv_decidableEq___at_Polynomial_instDecidableEq___spec__1___rarg___boxed), 5, 0);
return x_2;
}
}
LEAN_EXPORT uint8_t l_Polynomial_instDecidableEq___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; uint8_t x_6; 
x_5 = l_Polynomial_toFinsuppIso___closed__2;
x_6 = l_Function_Injective_decidableEq___at_Polynomial_instDecidableEq___spec__2___rarg(x_2, x_5, lean_box(0), x_3, x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Polynomial_instDecidableEq(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Polynomial_instDecidableEq___rarg___boxed), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Function_Injective_decidableEq___at_Polynomial_instDecidableEq___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; lean_object* x_7; 
x_6 = l_Function_Injective_decidableEq___at_Polynomial_instDecidableEq___spec__2___rarg(x_1, x_2, x_3, x_4, x_5);
x_7 = lean_box(x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Function_Injective_decidableEq___at_Polynomial_instDecidableEq___spec__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Function_Injective_decidableEq___at_Polynomial_instDecidableEq___spec__2(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Equiv_decidableEq___at_Polynomial_instDecidableEq___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; lean_object* x_7; 
x_6 = l_Equiv_decidableEq___at_Polynomial_instDecidableEq___spec__1___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_1);
x_7 = lean_box(x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Polynomial_instDecidableEq___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; 
x_5 = l_Polynomial_instDecidableEq___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_1);
x_6 = lean_box(x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Polynomial_toFinsuppIsoLinear___elambda__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_ctor_get(x_1, 1);
lean_inc(x_3);
lean_dec(x_1);
x_4 = lean_apply_1(x_3, x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Polynomial_toFinsuppIsoLinear___elambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Polynomial_toFinsuppIsoLinear___elambda__1___rarg), 2, 0);
return x_3;
}
}
static lean_object* _init_l_RingHom_id___at_Polynomial_toFinsuppIsoLinear___spec__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_id___rarg___boxed), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_Polynomial_toFinsuppIsoLinear___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_Polynomial_toFinsuppIsoLinear___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_Polynomial_toFinsuppIsoLinear___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l_Polynomial_toFinsuppIso___closed__2;
x_3 = lean_alloc_closure((void*)(l_Polynomial_toFinsuppIsoLinear___elambda__1___rarg), 2, 1);
lean_closure_set(x_3, 0, x_2);
x_4 = l_Polynomial_toFinsuppIso___closed__1;
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_4);
lean_ctor_set(x_5, 1, x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Polynomial_toFinsuppIsoLinear(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Polynomial_toFinsuppIsoLinear___rarg___boxed), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Polynomial_toFinsuppIsoLinear___elambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Polynomial_toFinsuppIsoLinear___elambda__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_Polynomial_toFinsuppIsoLinear___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_Polynomial_toFinsuppIsoLinear___spec__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Polynomial_toFinsuppIsoLinear___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Polynomial_toFinsuppIsoLinear___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Polynomial_support___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Polynomial_support(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Polynomial_support___rarg___boxed), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Polynomial_support___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Polynomial_support___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Polynomial_support___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Polynomial_support(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Algebra_Polynomial_Basic_0__Polynomial_support_match__1_splitter___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_apply_1(x_2, x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Algebra_Polynomial_Basic_0__Polynomial_support_match__1_splitter(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l___private_Mathlib_Algebra_Polynomial_Basic_0__Polynomial_support_match__1_splitter___rarg), 2, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Algebra_Polynomial_Basic_0__Polynomial_support_match__1_splitter___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l___private_Mathlib_Algebra_Polynomial_Basic_0__Polynomial_support_match__1_splitter(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Polynomial_coeff___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_ctor_get(x_1, 1);
lean_inc(x_3);
lean_dec(x_1);
x_4 = lean_apply_1(x_3, x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Polynomial_coeff(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Polynomial_coeff___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Polynomial_coeff___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Polynomial_coeff(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Finset_sum___at_Polynomial_sum___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = l_Multiset_map___rarg(x_3, x_2);
x_5 = l_Multiset_sum___rarg(x_1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Finset_sum___at_Polynomial_sum___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Finset_sum___at_Polynomial_sum___spec__1___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Polynomial_sum___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
lean_inc(x_3);
x_4 = l_Polynomial_coeff___rarg(x_1, x_3);
x_5 = lean_apply_2(x_2, x_3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Polynomial_sum___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_ctor_get(x_2, 0);
lean_inc(x_4);
x_5 = lean_alloc_closure((void*)(l_Polynomial_sum___rarg___lambda__1), 3, 2);
lean_closure_set(x_5, 0, x_2);
lean_closure_set(x_5, 1, x_3);
x_6 = l_Finset_sum___at_Polynomial_sum___spec__1___rarg(x_1, x_4, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Polynomial_sum(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Polynomial_sum___rarg), 3, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Polynomial_sum___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Polynomial_sum(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at_Polynomial_repr___spec__2(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at_Polynomial_repr___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Multiset_sort___at_Polynomial_repr___spec__4___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Nat_decLe___boxed), 2, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Multiset_sort___at_Polynomial_repr___spec__4___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_Multiset_sort___at_Polynomial_repr___spec__4___rarg___closed__1;
x_3 = l_List_MergeSort_Internal_mergeSortTR_u2082___rarg(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Multiset_sort___at_Polynomial_repr___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Multiset_sort___at_Polynomial_repr___spec__4___rarg), 1, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Finset_sort___at_Polynomial_repr___spec__3___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_alloc_closure((void*)(l_Nat_decLe___boxed), 2, 0);
x_3 = l_List_MergeSort_Internal_mergeSortTR_u2082___rarg(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Finset_sort___at_Polynomial_repr___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Finset_sort___at_Polynomial_repr___spec__3___rarg), 1, 0);
return x_4;
}
}
static lean_object* _init_l_List_mapTR_loop___at_Polynomial_repr___spec__5___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("C ", 2, 2);
return x_1;
}
}
static lean_object* _init_l_List_mapTR_loop___at_Polynomial_repr___spec__5___rarg___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_List_mapTR_loop___at_Polynomial_repr___spec__5___rarg___closed__1;
x_2 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_List_mapTR_loop___at_Polynomial_repr___spec__5___rarg___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked(" * X ^ ", 7, 7);
return x_1;
}
}
static lean_object* _init_l_List_mapTR_loop___at_Polynomial_repr___spec__5___rarg___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_List_mapTR_loop___at_Polynomial_repr___spec__5___rarg___closed__3;
x_2 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_List_mapTR_loop___at_Polynomial_repr___spec__5___rarg___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("X ^ ", 4, 4);
return x_1;
}
}
static lean_object* _init_l_List_mapTR_loop___at_Polynomial_repr___spec__5___rarg___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_List_mapTR_loop___at_Polynomial_repr___spec__5___rarg___closed__5;
x_2 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_List_mapTR_loop___at_Polynomial_repr___spec__5___rarg___closed__7() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked(" * X", 4, 4);
return x_1;
}
}
static lean_object* _init_l_List_mapTR_loop___at_Polynomial_repr___spec__5___rarg___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_List_mapTR_loop___at_Polynomial_repr___spec__5___rarg___closed__7;
x_2 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_List_mapTR_loop___at_Polynomial_repr___spec__5___rarg___closed__9() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("X", 1, 1);
return x_1;
}
}
static lean_object* _init_l_List_mapTR_loop___at_Polynomial_repr___spec__5___rarg___closed__10() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_List_mapTR_loop___at_Polynomial_repr___spec__5___rarg___closed__9;
x_2 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_List_mapTR_loop___at_Polynomial_repr___spec__5___rarg___closed__11() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_List_mapTR_loop___at_Polynomial_repr___spec__5___rarg___closed__10;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at_Polynomial_repr___spec__5___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_7; 
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_7 = l_List_reverse___rarg(x_6);
return x_7;
}
else
{
uint8_t x_8; 
x_8 = !lean_is_exclusive(x_5);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_9 = lean_ctor_get(x_5, 0);
x_10 = lean_ctor_get(x_5, 1);
x_11 = lean_unsigned_to_nat(0u);
x_12 = lean_nat_dec_eq(x_9, x_11);
if (x_12 == 0)
{
lean_object* x_13; uint8_t x_14; 
x_13 = lean_unsigned_to_nat(1u);
x_14 = lean_nat_dec_eq(x_9, x_13);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; uint8_t x_20; 
lean_inc(x_9);
lean_inc(x_4);
x_15 = l_Polynomial_coeff___rarg(x_4, x_9);
x_16 = l_Semiring_toNonAssocSemiring___rarg(x_1);
x_17 = l_NonAssocSemiring_toAddCommMonoidWithOne___rarg(x_16);
lean_dec(x_16);
x_18 = lean_ctor_get(x_17, 2);
lean_inc(x_18);
lean_dec(x_17);
lean_inc(x_3);
lean_inc(x_15);
x_19 = lean_apply_2(x_3, x_15, x_18);
x_20 = lean_unbox(x_19);
lean_dec(x_19);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_21 = lean_unsigned_to_nat(70u);
x_22 = l_Nat_cast___at_Polynomial_repr___spec__1(x_21);
x_23 = lean_unsigned_to_nat(1024u);
lean_inc(x_2);
x_24 = lean_apply_2(x_2, x_15, x_23);
x_25 = l_List_mapTR_loop___at_Polynomial_repr___spec__5___rarg___closed__2;
x_26 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_26, 0, x_25);
lean_ctor_set(x_26, 1, x_24);
x_27 = l_List_mapTR_loop___at_Polynomial_repr___spec__5___rarg___closed__4;
x_28 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_28, 0, x_26);
lean_ctor_set(x_28, 1, x_27);
x_29 = l___private_Init_Data_Repr_0__Nat_reprFast(x_9);
x_30 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_30, 0, x_29);
x_31 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_31, 0, x_28);
lean_ctor_set(x_31, 1, x_30);
x_32 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_32, 0, x_22);
lean_ctor_set(x_32, 1, x_31);
lean_ctor_set(x_5, 1, x_6);
lean_ctor_set(x_5, 0, x_32);
{
lean_object* _tmp_4 = x_10;
lean_object* _tmp_5 = x_5;
x_5 = _tmp_4;
x_6 = _tmp_5;
}
goto _start;
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; 
lean_dec(x_15);
x_34 = lean_unsigned_to_nat(80u);
x_35 = l_Nat_cast___at_Polynomial_repr___spec__1(x_34);
x_36 = l___private_Init_Data_Repr_0__Nat_reprFast(x_9);
x_37 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_37, 0, x_36);
x_38 = l_List_mapTR_loop___at_Polynomial_repr___spec__5___rarg___closed__6;
x_39 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_39, 0, x_38);
lean_ctor_set(x_39, 1, x_37);
x_40 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_40, 0, x_35);
lean_ctor_set(x_40, 1, x_39);
lean_ctor_set(x_5, 1, x_6);
lean_ctor_set(x_5, 0, x_40);
{
lean_object* _tmp_4 = x_10;
lean_object* _tmp_5 = x_5;
x_5 = _tmp_4;
x_6 = _tmp_5;
}
goto _start;
}
}
else
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; uint8_t x_47; 
lean_dec(x_9);
lean_inc(x_4);
x_42 = l_Polynomial_coeff___rarg(x_4, x_13);
x_43 = l_Semiring_toNonAssocSemiring___rarg(x_1);
x_44 = l_NonAssocSemiring_toAddCommMonoidWithOne___rarg(x_43);
lean_dec(x_43);
x_45 = lean_ctor_get(x_44, 2);
lean_inc(x_45);
lean_dec(x_44);
lean_inc(x_3);
lean_inc(x_42);
x_46 = lean_apply_2(x_3, x_42, x_45);
x_47 = lean_unbox(x_46);
lean_dec(x_46);
if (x_47 == 0)
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; 
x_48 = lean_unsigned_to_nat(70u);
x_49 = l_Nat_cast___at_Polynomial_repr___spec__1(x_48);
x_50 = lean_unsigned_to_nat(1024u);
lean_inc(x_2);
x_51 = lean_apply_2(x_2, x_42, x_50);
x_52 = l_List_mapTR_loop___at_Polynomial_repr___spec__5___rarg___closed__2;
x_53 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_53, 0, x_52);
lean_ctor_set(x_53, 1, x_51);
x_54 = l_List_mapTR_loop___at_Polynomial_repr___spec__5___rarg___closed__8;
x_55 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_55, 0, x_53);
lean_ctor_set(x_55, 1, x_54);
x_56 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_56, 0, x_49);
lean_ctor_set(x_56, 1, x_55);
lean_ctor_set(x_5, 1, x_6);
lean_ctor_set(x_5, 0, x_56);
{
lean_object* _tmp_4 = x_10;
lean_object* _tmp_5 = x_5;
x_5 = _tmp_4;
x_6 = _tmp_5;
}
goto _start;
}
else
{
lean_object* x_58; 
lean_dec(x_42);
x_58 = l_List_mapTR_loop___at_Polynomial_repr___spec__5___rarg___closed__11;
lean_ctor_set(x_5, 1, x_6);
lean_ctor_set(x_5, 0, x_58);
{
lean_object* _tmp_4 = x_10;
lean_object* _tmp_5 = x_5;
x_5 = _tmp_4;
x_6 = _tmp_5;
}
goto _start;
}
}
}
else
{
lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; 
lean_dec(x_9);
x_60 = lean_unsigned_to_nat(1024u);
x_61 = l_Nat_cast___at_Polynomial_repr___spec__1(x_60);
lean_inc(x_4);
x_62 = l_Polynomial_coeff___rarg(x_4, x_11);
lean_inc(x_2);
x_63 = lean_apply_2(x_2, x_62, x_60);
x_64 = l_List_mapTR_loop___at_Polynomial_repr___spec__5___rarg___closed__2;
x_65 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_65, 0, x_64);
lean_ctor_set(x_65, 1, x_63);
x_66 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_66, 0, x_61);
lean_ctor_set(x_66, 1, x_65);
lean_ctor_set(x_5, 1, x_6);
lean_ctor_set(x_5, 0, x_66);
{
lean_object* _tmp_4 = x_10;
lean_object* _tmp_5 = x_5;
x_5 = _tmp_4;
x_6 = _tmp_5;
}
goto _start;
}
}
else
{
lean_object* x_68; lean_object* x_69; lean_object* x_70; uint8_t x_71; 
x_68 = lean_ctor_get(x_5, 0);
x_69 = lean_ctor_get(x_5, 1);
lean_inc(x_69);
lean_inc(x_68);
lean_dec(x_5);
x_70 = lean_unsigned_to_nat(0u);
x_71 = lean_nat_dec_eq(x_68, x_70);
if (x_71 == 0)
{
lean_object* x_72; uint8_t x_73; 
x_72 = lean_unsigned_to_nat(1u);
x_73 = lean_nat_dec_eq(x_68, x_72);
if (x_73 == 0)
{
lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; uint8_t x_79; 
lean_inc(x_68);
lean_inc(x_4);
x_74 = l_Polynomial_coeff___rarg(x_4, x_68);
x_75 = l_Semiring_toNonAssocSemiring___rarg(x_1);
x_76 = l_NonAssocSemiring_toAddCommMonoidWithOne___rarg(x_75);
lean_dec(x_75);
x_77 = lean_ctor_get(x_76, 2);
lean_inc(x_77);
lean_dec(x_76);
lean_inc(x_3);
lean_inc(x_74);
x_78 = lean_apply_2(x_3, x_74, x_77);
x_79 = lean_unbox(x_78);
lean_dec(x_78);
if (x_79 == 0)
{
lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; 
x_80 = lean_unsigned_to_nat(70u);
x_81 = l_Nat_cast___at_Polynomial_repr___spec__1(x_80);
x_82 = lean_unsigned_to_nat(1024u);
lean_inc(x_2);
x_83 = lean_apply_2(x_2, x_74, x_82);
x_84 = l_List_mapTR_loop___at_Polynomial_repr___spec__5___rarg___closed__2;
x_85 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_85, 0, x_84);
lean_ctor_set(x_85, 1, x_83);
x_86 = l_List_mapTR_loop___at_Polynomial_repr___spec__5___rarg___closed__4;
x_87 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_87, 0, x_85);
lean_ctor_set(x_87, 1, x_86);
x_88 = l___private_Init_Data_Repr_0__Nat_reprFast(x_68);
x_89 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_89, 0, x_88);
x_90 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_90, 0, x_87);
lean_ctor_set(x_90, 1, x_89);
x_91 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_91, 0, x_81);
lean_ctor_set(x_91, 1, x_90);
x_92 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_92, 0, x_91);
lean_ctor_set(x_92, 1, x_6);
x_5 = x_69;
x_6 = x_92;
goto _start;
}
else
{
lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; 
lean_dec(x_74);
x_94 = lean_unsigned_to_nat(80u);
x_95 = l_Nat_cast___at_Polynomial_repr___spec__1(x_94);
x_96 = l___private_Init_Data_Repr_0__Nat_reprFast(x_68);
x_97 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_97, 0, x_96);
x_98 = l_List_mapTR_loop___at_Polynomial_repr___spec__5___rarg___closed__6;
x_99 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_99, 0, x_98);
lean_ctor_set(x_99, 1, x_97);
x_100 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_100, 0, x_95);
lean_ctor_set(x_100, 1, x_99);
x_101 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_101, 0, x_100);
lean_ctor_set(x_101, 1, x_6);
x_5 = x_69;
x_6 = x_101;
goto _start;
}
}
else
{
lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; uint8_t x_108; 
lean_dec(x_68);
lean_inc(x_4);
x_103 = l_Polynomial_coeff___rarg(x_4, x_72);
x_104 = l_Semiring_toNonAssocSemiring___rarg(x_1);
x_105 = l_NonAssocSemiring_toAddCommMonoidWithOne___rarg(x_104);
lean_dec(x_104);
x_106 = lean_ctor_get(x_105, 2);
lean_inc(x_106);
lean_dec(x_105);
lean_inc(x_3);
lean_inc(x_103);
x_107 = lean_apply_2(x_3, x_103, x_106);
x_108 = lean_unbox(x_107);
lean_dec(x_107);
if (x_108 == 0)
{
lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; 
x_109 = lean_unsigned_to_nat(70u);
x_110 = l_Nat_cast___at_Polynomial_repr___spec__1(x_109);
x_111 = lean_unsigned_to_nat(1024u);
lean_inc(x_2);
x_112 = lean_apply_2(x_2, x_103, x_111);
x_113 = l_List_mapTR_loop___at_Polynomial_repr___spec__5___rarg___closed__2;
x_114 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_114, 0, x_113);
lean_ctor_set(x_114, 1, x_112);
x_115 = l_List_mapTR_loop___at_Polynomial_repr___spec__5___rarg___closed__8;
x_116 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_116, 0, x_114);
lean_ctor_set(x_116, 1, x_115);
x_117 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_117, 0, x_110);
lean_ctor_set(x_117, 1, x_116);
x_118 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_118, 0, x_117);
lean_ctor_set(x_118, 1, x_6);
x_5 = x_69;
x_6 = x_118;
goto _start;
}
else
{
lean_object* x_120; lean_object* x_121; 
lean_dec(x_103);
x_120 = l_List_mapTR_loop___at_Polynomial_repr___spec__5___rarg___closed__11;
x_121 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_121, 0, x_120);
lean_ctor_set(x_121, 1, x_6);
x_5 = x_69;
x_6 = x_121;
goto _start;
}
}
}
else
{
lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; 
lean_dec(x_68);
x_123 = lean_unsigned_to_nat(1024u);
x_124 = l_Nat_cast___at_Polynomial_repr___spec__1(x_123);
lean_inc(x_4);
x_125 = l_Polynomial_coeff___rarg(x_4, x_70);
lean_inc(x_2);
x_126 = lean_apply_2(x_2, x_125, x_123);
x_127 = l_List_mapTR_loop___at_Polynomial_repr___spec__5___rarg___closed__2;
x_128 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_128, 0, x_127);
lean_ctor_set(x_128, 1, x_126);
x_129 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_129, 0, x_124);
lean_ctor_set(x_129, 1, x_128);
x_130 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_130, 0, x_129);
lean_ctor_set(x_130, 1, x_6);
x_5 = x_69;
x_6 = x_130;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at_Polynomial_repr___spec__5(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_mapTR_loop___at_Polynomial_repr___spec__5___rarg___boxed), 6, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at_Polynomial_repr___spec__6(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_3; 
x_3 = l_List_reverse___rarg(x_2);
return x_3;
}
else
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_1);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_ctor_get(x_1, 0);
x_6 = lean_ctor_get(x_1, 1);
x_7 = lean_ctor_get(x_5, 1);
lean_inc(x_7);
lean_dec(x_5);
lean_ctor_set(x_1, 1, x_2);
lean_ctor_set(x_1, 0, x_7);
{
lean_object* _tmp_0 = x_6;
lean_object* _tmp_1 = x_1;
x_1 = _tmp_0;
x_2 = _tmp_1;
}
goto _start;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_9 = lean_ctor_get(x_1, 0);
x_10 = lean_ctor_get(x_1, 1);
lean_inc(x_10);
lean_inc(x_9);
lean_dec(x_1);
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
lean_dec(x_9);
x_12 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_12, 0, x_11);
lean_ctor_set(x_12, 1, x_2);
x_1 = x_10;
x_2 = x_12;
goto _start;
}
}
}
}
static lean_object* _init_l_Polynomial_repr___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("0", 1, 1);
return x_1;
}
}
static lean_object* _init_l_Polynomial_repr___rarg___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Polynomial_repr___rarg___closed__1;
x_2 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Polynomial_repr___rarg___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("(", 1, 1);
return x_1;
}
}
static lean_object* _init_l_Polynomial_repr___rarg___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Polynomial_repr___rarg___closed__3;
x_2 = lean_string_length(x_1);
return x_2;
}
}
static lean_object* _init_l_Polynomial_repr___rarg___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Polynomial_repr___rarg___closed__4;
x_2 = lean_nat_to_int(x_1);
return x_2;
}
}
static lean_object* _init_l_Polynomial_repr___rarg___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Polynomial_repr___rarg___closed__3;
x_2 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Polynomial_repr___rarg___closed__7() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked(")", 1, 1);
return x_1;
}
}
static lean_object* _init_l_Polynomial_repr___rarg___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Polynomial_repr___rarg___closed__7;
x_2 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Polynomial_repr___rarg___closed__9() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked(" +", 2, 2);
return x_1;
}
}
static lean_object* _init_l_Polynomial_repr___rarg___closed__10() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Polynomial_repr___rarg___closed__9;
x_2 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Polynomial_repr___rarg___closed__11() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Polynomial_repr___rarg___closed__10;
x_2 = lean_box(1);
x_3 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Polynomial_repr___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_6 = lean_ctor_get(x_4, 0);
lean_inc(x_6);
x_7 = lean_alloc_closure((void*)(l_Nat_decLe___boxed), 2, 0);
x_8 = l_List_MergeSort_Internal_mergeSortTR_u2082___rarg(x_6, x_7);
x_9 = lean_box(0);
x_10 = l_List_mapTR_loop___at_Polynomial_repr___spec__5___rarg(x_1, x_2, x_3, x_4, x_8, x_9);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_11; 
lean_dec(x_5);
x_11 = l_Polynomial_repr___rarg___closed__2;
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_ctor_get(x_10, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_10, 1);
lean_inc(x_13);
if (lean_obj_tag(x_13) == 0)
{
uint8_t x_14; 
x_14 = !lean_is_exclusive(x_10);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; uint8_t x_17; 
x_15 = lean_ctor_get(x_10, 1);
lean_dec(x_15);
x_16 = lean_ctor_get(x_10, 0);
lean_dec(x_16);
x_17 = !lean_is_exclusive(x_12);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; uint8_t x_23; 
x_18 = lean_ctor_get(x_12, 0);
x_19 = lean_ctor_get(x_12, 1);
x_20 = l_Nat_cast___at_Polynomial_repr___spec__1(x_5);
x_21 = l_Multiset_sort___at_Polynomial_repr___spec__4___rarg___closed__1;
x_22 = l_WithTop_decidableLE___rarg(x_21, x_18, x_20);
x_23 = lean_unbox(x_22);
lean_dec(x_22);
if (x_23 == 0)
{
lean_free_object(x_12);
lean_free_object(x_10);
return x_19;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; uint8_t x_28; lean_object* x_29; 
x_24 = l_Polynomial_repr___rarg___closed__6;
lean_ctor_set_tag(x_12, 5);
lean_ctor_set(x_12, 0, x_24);
x_25 = l_Polynomial_repr___rarg___closed__8;
lean_ctor_set_tag(x_10, 5);
lean_ctor_set(x_10, 1, x_25);
x_26 = l_Polynomial_repr___rarg___closed__5;
x_27 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_27, 0, x_26);
lean_ctor_set(x_27, 1, x_10);
x_28 = 0;
x_29 = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(x_29, 0, x_27);
lean_ctor_set_uint8(x_29, sizeof(void*)*1, x_28);
return x_29;
}
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; uint8_t x_35; 
x_30 = lean_ctor_get(x_12, 0);
x_31 = lean_ctor_get(x_12, 1);
lean_inc(x_31);
lean_inc(x_30);
lean_dec(x_12);
x_32 = l_Nat_cast___at_Polynomial_repr___spec__1(x_5);
x_33 = l_Multiset_sort___at_Polynomial_repr___spec__4___rarg___closed__1;
x_34 = l_WithTop_decidableLE___rarg(x_33, x_30, x_32);
x_35 = lean_unbox(x_34);
lean_dec(x_34);
if (x_35 == 0)
{
lean_free_object(x_10);
return x_31;
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; uint8_t x_41; lean_object* x_42; 
x_36 = l_Polynomial_repr___rarg___closed__6;
x_37 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_37, 0, x_36);
lean_ctor_set(x_37, 1, x_31);
x_38 = l_Polynomial_repr___rarg___closed__8;
lean_ctor_set_tag(x_10, 5);
lean_ctor_set(x_10, 1, x_38);
lean_ctor_set(x_10, 0, x_37);
x_39 = l_Polynomial_repr___rarg___closed__5;
x_40 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_40, 0, x_39);
lean_ctor_set(x_40, 1, x_10);
x_41 = 0;
x_42 = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(x_42, 0, x_40);
lean_ctor_set_uint8(x_42, sizeof(void*)*1, x_41);
return x_42;
}
}
}
else
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; uint8_t x_49; 
lean_dec(x_10);
x_43 = lean_ctor_get(x_12, 0);
lean_inc(x_43);
x_44 = lean_ctor_get(x_12, 1);
lean_inc(x_44);
if (lean_is_exclusive(x_12)) {
 lean_ctor_release(x_12, 0);
 lean_ctor_release(x_12, 1);
 x_45 = x_12;
} else {
 lean_dec_ref(x_12);
 x_45 = lean_box(0);
}
x_46 = l_Nat_cast___at_Polynomial_repr___spec__1(x_5);
x_47 = l_Multiset_sort___at_Polynomial_repr___spec__4___rarg___closed__1;
x_48 = l_WithTop_decidableLE___rarg(x_47, x_43, x_46);
x_49 = lean_unbox(x_48);
lean_dec(x_48);
if (x_49 == 0)
{
lean_dec(x_45);
return x_44;
}
else
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; uint8_t x_56; lean_object* x_57; 
x_50 = l_Polynomial_repr___rarg___closed__6;
if (lean_is_scalar(x_45)) {
 x_51 = lean_alloc_ctor(5, 2, 0);
} else {
 x_51 = x_45;
 lean_ctor_set_tag(x_51, 5);
}
lean_ctor_set(x_51, 0, x_50);
lean_ctor_set(x_51, 1, x_44);
x_52 = l_Polynomial_repr___rarg___closed__8;
x_53 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_53, 0, x_51);
lean_ctor_set(x_53, 1, x_52);
x_54 = l_Polynomial_repr___rarg___closed__5;
x_55 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_55, 0, x_54);
lean_ctor_set(x_55, 1, x_53);
x_56 = 0;
x_57 = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(x_57, 0, x_55);
lean_ctor_set_uint8(x_57, sizeof(void*)*1, x_56);
return x_57;
}
}
}
else
{
uint8_t x_58; 
x_58 = !lean_is_exclusive(x_12);
if (x_58 == 0)
{
lean_object* x_59; lean_object* x_60; uint8_t x_61; 
x_59 = lean_ctor_get(x_12, 1);
lean_dec(x_59);
x_60 = lean_ctor_get(x_12, 0);
lean_dec(x_60);
x_61 = !lean_is_exclusive(x_13);
if (x_61 == 0)
{
lean_object* x_62; lean_object* x_63; lean_object* x_64; uint8_t x_65; lean_object* x_66; uint8_t x_67; 
x_62 = lean_ctor_get(x_13, 1);
lean_dec(x_62);
x_63 = lean_ctor_get(x_13, 0);
lean_dec(x_63);
x_64 = lean_unsigned_to_nat(65u);
x_65 = lean_nat_dec_le(x_64, x_5);
lean_dec(x_5);
lean_inc(x_10);
x_66 = l_List_mapTR_loop___at_Polynomial_repr___spec__6(x_10, x_9);
x_67 = !lean_is_exclusive(x_10);
if (x_67 == 0)
{
lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; uint8_t x_72; lean_object* x_73; 
x_68 = lean_ctor_get(x_10, 1);
lean_dec(x_68);
x_69 = lean_ctor_get(x_10, 0);
lean_dec(x_69);
x_70 = l_Polynomial_repr___rarg___closed__11;
x_71 = l_Std_Format_joinSep___at_Prod_repr___spec__1(x_66, x_70);
x_72 = 1;
x_73 = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(x_73, 0, x_71);
lean_ctor_set_uint8(x_73, sizeof(void*)*1, x_72);
if (x_65 == 0)
{
lean_free_object(x_10);
lean_free_object(x_13);
lean_free_object(x_12);
return x_73;
}
else
{
lean_object* x_74; lean_object* x_75; lean_object* x_76; uint8_t x_77; lean_object* x_78; 
x_74 = l_Polynomial_repr___rarg___closed__6;
lean_ctor_set_tag(x_13, 5);
lean_ctor_set(x_13, 1, x_73);
lean_ctor_set(x_13, 0, x_74);
x_75 = l_Polynomial_repr___rarg___closed__8;
lean_ctor_set_tag(x_12, 5);
lean_ctor_set(x_12, 1, x_75);
lean_ctor_set(x_12, 0, x_13);
x_76 = l_Polynomial_repr___rarg___closed__5;
lean_ctor_set_tag(x_10, 4);
lean_ctor_set(x_10, 1, x_12);
lean_ctor_set(x_10, 0, x_76);
x_77 = 0;
x_78 = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(x_78, 0, x_10);
lean_ctor_set_uint8(x_78, sizeof(void*)*1, x_77);
return x_78;
}
}
else
{
lean_object* x_79; lean_object* x_80; uint8_t x_81; lean_object* x_82; 
lean_dec(x_10);
x_79 = l_Polynomial_repr___rarg___closed__11;
x_80 = l_Std_Format_joinSep___at_Prod_repr___spec__1(x_66, x_79);
x_81 = 1;
x_82 = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(x_82, 0, x_80);
lean_ctor_set_uint8(x_82, sizeof(void*)*1, x_81);
if (x_65 == 0)
{
lean_free_object(x_13);
lean_free_object(x_12);
return x_82;
}
else
{
lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; uint8_t x_87; lean_object* x_88; 
x_83 = l_Polynomial_repr___rarg___closed__6;
lean_ctor_set_tag(x_13, 5);
lean_ctor_set(x_13, 1, x_82);
lean_ctor_set(x_13, 0, x_83);
x_84 = l_Polynomial_repr___rarg___closed__8;
lean_ctor_set_tag(x_12, 5);
lean_ctor_set(x_12, 1, x_84);
lean_ctor_set(x_12, 0, x_13);
x_85 = l_Polynomial_repr___rarg___closed__5;
x_86 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_86, 0, x_85);
lean_ctor_set(x_86, 1, x_12);
x_87 = 0;
x_88 = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(x_88, 0, x_86);
lean_ctor_set_uint8(x_88, sizeof(void*)*1, x_87);
return x_88;
}
}
}
else
{
lean_object* x_89; uint8_t x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; uint8_t x_95; lean_object* x_96; 
lean_dec(x_13);
x_89 = lean_unsigned_to_nat(65u);
x_90 = lean_nat_dec_le(x_89, x_5);
lean_dec(x_5);
lean_inc(x_10);
x_91 = l_List_mapTR_loop___at_Polynomial_repr___spec__6(x_10, x_9);
if (lean_is_exclusive(x_10)) {
 lean_ctor_release(x_10, 0);
 lean_ctor_release(x_10, 1);
 x_92 = x_10;
} else {
 lean_dec_ref(x_10);
 x_92 = lean_box(0);
}
x_93 = l_Polynomial_repr___rarg___closed__11;
x_94 = l_Std_Format_joinSep___at_Prod_repr___spec__1(x_91, x_93);
x_95 = 1;
x_96 = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(x_96, 0, x_94);
lean_ctor_set_uint8(x_96, sizeof(void*)*1, x_95);
if (x_90 == 0)
{
lean_dec(x_92);
lean_free_object(x_12);
return x_96;
}
else
{
lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; uint8_t x_102; lean_object* x_103; 
x_97 = l_Polynomial_repr___rarg___closed__6;
x_98 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_98, 0, x_97);
lean_ctor_set(x_98, 1, x_96);
x_99 = l_Polynomial_repr___rarg___closed__8;
lean_ctor_set_tag(x_12, 5);
lean_ctor_set(x_12, 1, x_99);
lean_ctor_set(x_12, 0, x_98);
x_100 = l_Polynomial_repr___rarg___closed__5;
if (lean_is_scalar(x_92)) {
 x_101 = lean_alloc_ctor(4, 2, 0);
} else {
 x_101 = x_92;
 lean_ctor_set_tag(x_101, 4);
}
lean_ctor_set(x_101, 0, x_100);
lean_ctor_set(x_101, 1, x_12);
x_102 = 0;
x_103 = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(x_103, 0, x_101);
lean_ctor_set_uint8(x_103, sizeof(void*)*1, x_102);
return x_103;
}
}
}
else
{
lean_object* x_104; lean_object* x_105; uint8_t x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; uint8_t x_111; lean_object* x_112; 
lean_dec(x_12);
if (lean_is_exclusive(x_13)) {
 lean_ctor_release(x_13, 0);
 lean_ctor_release(x_13, 1);
 x_104 = x_13;
} else {
 lean_dec_ref(x_13);
 x_104 = lean_box(0);
}
x_105 = lean_unsigned_to_nat(65u);
x_106 = lean_nat_dec_le(x_105, x_5);
lean_dec(x_5);
lean_inc(x_10);
x_107 = l_List_mapTR_loop___at_Polynomial_repr___spec__6(x_10, x_9);
if (lean_is_exclusive(x_10)) {
 lean_ctor_release(x_10, 0);
 lean_ctor_release(x_10, 1);
 x_108 = x_10;
} else {
 lean_dec_ref(x_10);
 x_108 = lean_box(0);
}
x_109 = l_Polynomial_repr___rarg___closed__11;
x_110 = l_Std_Format_joinSep___at_Prod_repr___spec__1(x_107, x_109);
x_111 = 1;
x_112 = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(x_112, 0, x_110);
lean_ctor_set_uint8(x_112, sizeof(void*)*1, x_111);
if (x_106 == 0)
{
lean_dec(x_108);
lean_dec(x_104);
return x_112;
}
else
{
lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; uint8_t x_119; lean_object* x_120; 
x_113 = l_Polynomial_repr___rarg___closed__6;
if (lean_is_scalar(x_104)) {
 x_114 = lean_alloc_ctor(5, 2, 0);
} else {
 x_114 = x_104;
 lean_ctor_set_tag(x_114, 5);
}
lean_ctor_set(x_114, 0, x_113);
lean_ctor_set(x_114, 1, x_112);
x_115 = l_Polynomial_repr___rarg___closed__8;
x_116 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_116, 0, x_114);
lean_ctor_set(x_116, 1, x_115);
x_117 = l_Polynomial_repr___rarg___closed__5;
if (lean_is_scalar(x_108)) {
 x_118 = lean_alloc_ctor(4, 2, 0);
} else {
 x_118 = x_108;
 lean_ctor_set_tag(x_118, 4);
}
lean_ctor_set(x_118, 0, x_117);
lean_ctor_set(x_118, 1, x_116);
x_119 = 0;
x_120 = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(x_120, 0, x_118);
lean_ctor_set_uint8(x_120, sizeof(void*)*1, x_119);
return x_120;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Polynomial_repr(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Polynomial_repr___rarg___boxed), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at_Polynomial_repr___spec__2___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Nat_cast___at_Polynomial_repr___spec__2(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at_Polynomial_repr___spec__5___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_List_mapTR_loop___at_Polynomial_repr___spec__5___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Polynomial_repr___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Polynomial_repr___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_1);
return x_6;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_GroupWithZero_Divisibility(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Order_Monoid_Unbundled_WithTop(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Finset_Sort(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Tactic_FastInstance(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Group_Submonoid_Operations(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_MonoidAlgebra_Defs(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Algebra_Polynomial_Basic(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_GroupWithZero_Divisibility(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Order_Monoid_Unbundled_WithTop(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Finset_Sort(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Tactic_FastInstance(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Group_Submonoid_Operations(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_MonoidAlgebra_Defs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Polynomial_term___x5bX_x5d___closed__1 = _init_l_Polynomial_term___x5bX_x5d___closed__1();
lean_mark_persistent(l_Polynomial_term___x5bX_x5d___closed__1);
l_Polynomial_term___x5bX_x5d___closed__2 = _init_l_Polynomial_term___x5bX_x5d___closed__2();
lean_mark_persistent(l_Polynomial_term___x5bX_x5d___closed__2);
l_Polynomial_term___x5bX_x5d___closed__3 = _init_l_Polynomial_term___x5bX_x5d___closed__3();
lean_mark_persistent(l_Polynomial_term___x5bX_x5d___closed__3);
l_Polynomial_term___x5bX_x5d___closed__4 = _init_l_Polynomial_term___x5bX_x5d___closed__4();
lean_mark_persistent(l_Polynomial_term___x5bX_x5d___closed__4);
l_Polynomial_term___x5bX_x5d___closed__5 = _init_l_Polynomial_term___x5bX_x5d___closed__5();
lean_mark_persistent(l_Polynomial_term___x5bX_x5d___closed__5);
l_Polynomial_term___x5bX_x5d___closed__6 = _init_l_Polynomial_term___x5bX_x5d___closed__6();
lean_mark_persistent(l_Polynomial_term___x5bX_x5d___closed__6);
l_Polynomial_term___x5bX_x5d = _init_l_Polynomial_term___x5bX_x5d();
lean_mark_persistent(l_Polynomial_term___x5bX_x5d);
l_Polynomial___aux__Mathlib__Algebra__Polynomial__Basic______macroRules__Polynomial__term___x5bX_x5d__1___closed__1 = _init_l_Polynomial___aux__Mathlib__Algebra__Polynomial__Basic______macroRules__Polynomial__term___x5bX_x5d__1___closed__1();
lean_mark_persistent(l_Polynomial___aux__Mathlib__Algebra__Polynomial__Basic______macroRules__Polynomial__term___x5bX_x5d__1___closed__1);
l_Polynomial___aux__Mathlib__Algebra__Polynomial__Basic______macroRules__Polynomial__term___x5bX_x5d__1___closed__2 = _init_l_Polynomial___aux__Mathlib__Algebra__Polynomial__Basic______macroRules__Polynomial__term___x5bX_x5d__1___closed__2();
lean_mark_persistent(l_Polynomial___aux__Mathlib__Algebra__Polynomial__Basic______macroRules__Polynomial__term___x5bX_x5d__1___closed__2);
l_Polynomial___aux__Mathlib__Algebra__Polynomial__Basic______macroRules__Polynomial__term___x5bX_x5d__1___closed__3 = _init_l_Polynomial___aux__Mathlib__Algebra__Polynomial__Basic______macroRules__Polynomial__term___x5bX_x5d__1___closed__3();
lean_mark_persistent(l_Polynomial___aux__Mathlib__Algebra__Polynomial__Basic______macroRules__Polynomial__term___x5bX_x5d__1___closed__3);
l_Polynomial___aux__Mathlib__Algebra__Polynomial__Basic______macroRules__Polynomial__term___x5bX_x5d__1___closed__4 = _init_l_Polynomial___aux__Mathlib__Algebra__Polynomial__Basic______macroRules__Polynomial__term___x5bX_x5d__1___closed__4();
lean_mark_persistent(l_Polynomial___aux__Mathlib__Algebra__Polynomial__Basic______macroRules__Polynomial__term___x5bX_x5d__1___closed__4);
l_Polynomial___aux__Mathlib__Algebra__Polynomial__Basic______macroRules__Polynomial__term___x5bX_x5d__1___closed__5 = _init_l_Polynomial___aux__Mathlib__Algebra__Polynomial__Basic______macroRules__Polynomial__term___x5bX_x5d__1___closed__5();
lean_mark_persistent(l_Polynomial___aux__Mathlib__Algebra__Polynomial__Basic______macroRules__Polynomial__term___x5bX_x5d__1___closed__5);
l_Polynomial___aux__Mathlib__Algebra__Polynomial__Basic______macroRules__Polynomial__term___x5bX_x5d__1___closed__6 = _init_l_Polynomial___aux__Mathlib__Algebra__Polynomial__Basic______macroRules__Polynomial__term___x5bX_x5d__1___closed__6();
lean_mark_persistent(l_Polynomial___aux__Mathlib__Algebra__Polynomial__Basic______macroRules__Polynomial__term___x5bX_x5d__1___closed__6);
l_Polynomial___aux__Mathlib__Algebra__Polynomial__Basic______macroRules__Polynomial__term___x5bX_x5d__1___closed__7 = _init_l_Polynomial___aux__Mathlib__Algebra__Polynomial__Basic______macroRules__Polynomial__term___x5bX_x5d__1___closed__7();
lean_mark_persistent(l_Polynomial___aux__Mathlib__Algebra__Polynomial__Basic______macroRules__Polynomial__term___x5bX_x5d__1___closed__7);
l_Polynomial___aux__Mathlib__Algebra__Polynomial__Basic______macroRules__Polynomial__term___x5bX_x5d__1___closed__8 = _init_l_Polynomial___aux__Mathlib__Algebra__Polynomial__Basic______macroRules__Polynomial__term___x5bX_x5d__1___closed__8();
lean_mark_persistent(l_Polynomial___aux__Mathlib__Algebra__Polynomial__Basic______macroRules__Polynomial__term___x5bX_x5d__1___closed__8);
l_Polynomial___aux__Mathlib__Algebra__Polynomial__Basic______macroRules__Polynomial__term___x5bX_x5d__1___closed__9 = _init_l_Polynomial___aux__Mathlib__Algebra__Polynomial__Basic______macroRules__Polynomial__term___x5bX_x5d__1___closed__9();
lean_mark_persistent(l_Polynomial___aux__Mathlib__Algebra__Polynomial__Basic______macroRules__Polynomial__term___x5bX_x5d__1___closed__9);
l_Polynomial___aux__Mathlib__Algebra__Polynomial__Basic______macroRules__Polynomial__term___x5bX_x5d__1___closed__10 = _init_l_Polynomial___aux__Mathlib__Algebra__Polynomial__Basic______macroRules__Polynomial__term___x5bX_x5d__1___closed__10();
lean_mark_persistent(l_Polynomial___aux__Mathlib__Algebra__Polynomial__Basic______macroRules__Polynomial__term___x5bX_x5d__1___closed__10);
l_Polynomial___aux__Mathlib__Algebra__Polynomial__Basic______macroRules__Polynomial__term___x5bX_x5d__1___closed__11 = _init_l_Polynomial___aux__Mathlib__Algebra__Polynomial__Basic______macroRules__Polynomial__term___x5bX_x5d__1___closed__11();
lean_mark_persistent(l_Polynomial___aux__Mathlib__Algebra__Polynomial__Basic______macroRules__Polynomial__term___x5bX_x5d__1___closed__11);
l_Polynomial___aux__Mathlib__Algebra__Polynomial__Basic______macroRules__Polynomial__term___x5bX_x5d__1___closed__12 = _init_l_Polynomial___aux__Mathlib__Algebra__Polynomial__Basic______macroRules__Polynomial__term___x5bX_x5d__1___closed__12();
lean_mark_persistent(l_Polynomial___aux__Mathlib__Algebra__Polynomial__Basic______macroRules__Polynomial__term___x5bX_x5d__1___closed__12);
l_Polynomial___aux__Mathlib__Algebra__Polynomial__Basic______macroRules__Polynomial__term___x5bX_x5d__1___closed__13 = _init_l_Polynomial___aux__Mathlib__Algebra__Polynomial__Basic______macroRules__Polynomial__term___x5bX_x5d__1___closed__13();
lean_mark_persistent(l_Polynomial___aux__Mathlib__Algebra__Polynomial__Basic______macroRules__Polynomial__term___x5bX_x5d__1___closed__13);
l_Polynomial___aux__Mathlib__Algebra__Polynomial__Basic______unexpand__Polynomial__1___closed__1 = _init_l_Polynomial___aux__Mathlib__Algebra__Polynomial__Basic______unexpand__Polynomial__1___closed__1();
lean_mark_persistent(l_Polynomial___aux__Mathlib__Algebra__Polynomial__Basic______unexpand__Polynomial__1___closed__1);
l_Polynomial___aux__Mathlib__Algebra__Polynomial__Basic______unexpand__Polynomial__1___closed__2 = _init_l_Polynomial___aux__Mathlib__Algebra__Polynomial__Basic______unexpand__Polynomial__1___closed__2();
lean_mark_persistent(l_Polynomial___aux__Mathlib__Algebra__Polynomial__Basic______unexpand__Polynomial__1___closed__2);
l_Polynomial_toFinsuppIso___closed__1 = _init_l_Polynomial_toFinsuppIso___closed__1();
lean_mark_persistent(l_Polynomial_toFinsuppIso___closed__1);
l_Polynomial_toFinsuppIso___closed__2 = _init_l_Polynomial_toFinsuppIso___closed__2();
lean_mark_persistent(l_Polynomial_toFinsuppIso___closed__2);
l_Function_Injective_decidableEq___at_Polynomial_instDecidableEq___spec__2___rarg___closed__1 = _init_l_Function_Injective_decidableEq___at_Polynomial_instDecidableEq___spec__2___rarg___closed__1();
lean_mark_persistent(l_Function_Injective_decidableEq___at_Polynomial_instDecidableEq___spec__2___rarg___closed__1);
l_RingHom_id___at_Polynomial_toFinsuppIsoLinear___spec__1___closed__1 = _init_l_RingHom_id___at_Polynomial_toFinsuppIsoLinear___spec__1___closed__1();
lean_mark_persistent(l_RingHom_id___at_Polynomial_toFinsuppIsoLinear___spec__1___closed__1);
l_Multiset_sort___at_Polynomial_repr___spec__4___rarg___closed__1 = _init_l_Multiset_sort___at_Polynomial_repr___spec__4___rarg___closed__1();
lean_mark_persistent(l_Multiset_sort___at_Polynomial_repr___spec__4___rarg___closed__1);
l_List_mapTR_loop___at_Polynomial_repr___spec__5___rarg___closed__1 = _init_l_List_mapTR_loop___at_Polynomial_repr___spec__5___rarg___closed__1();
lean_mark_persistent(l_List_mapTR_loop___at_Polynomial_repr___spec__5___rarg___closed__1);
l_List_mapTR_loop___at_Polynomial_repr___spec__5___rarg___closed__2 = _init_l_List_mapTR_loop___at_Polynomial_repr___spec__5___rarg___closed__2();
lean_mark_persistent(l_List_mapTR_loop___at_Polynomial_repr___spec__5___rarg___closed__2);
l_List_mapTR_loop___at_Polynomial_repr___spec__5___rarg___closed__3 = _init_l_List_mapTR_loop___at_Polynomial_repr___spec__5___rarg___closed__3();
lean_mark_persistent(l_List_mapTR_loop___at_Polynomial_repr___spec__5___rarg___closed__3);
l_List_mapTR_loop___at_Polynomial_repr___spec__5___rarg___closed__4 = _init_l_List_mapTR_loop___at_Polynomial_repr___spec__5___rarg___closed__4();
lean_mark_persistent(l_List_mapTR_loop___at_Polynomial_repr___spec__5___rarg___closed__4);
l_List_mapTR_loop___at_Polynomial_repr___spec__5___rarg___closed__5 = _init_l_List_mapTR_loop___at_Polynomial_repr___spec__5___rarg___closed__5();
lean_mark_persistent(l_List_mapTR_loop___at_Polynomial_repr___spec__5___rarg___closed__5);
l_List_mapTR_loop___at_Polynomial_repr___spec__5___rarg___closed__6 = _init_l_List_mapTR_loop___at_Polynomial_repr___spec__5___rarg___closed__6();
lean_mark_persistent(l_List_mapTR_loop___at_Polynomial_repr___spec__5___rarg___closed__6);
l_List_mapTR_loop___at_Polynomial_repr___spec__5___rarg___closed__7 = _init_l_List_mapTR_loop___at_Polynomial_repr___spec__5___rarg___closed__7();
lean_mark_persistent(l_List_mapTR_loop___at_Polynomial_repr___spec__5___rarg___closed__7);
l_List_mapTR_loop___at_Polynomial_repr___spec__5___rarg___closed__8 = _init_l_List_mapTR_loop___at_Polynomial_repr___spec__5___rarg___closed__8();
lean_mark_persistent(l_List_mapTR_loop___at_Polynomial_repr___spec__5___rarg___closed__8);
l_List_mapTR_loop___at_Polynomial_repr___spec__5___rarg___closed__9 = _init_l_List_mapTR_loop___at_Polynomial_repr___spec__5___rarg___closed__9();
lean_mark_persistent(l_List_mapTR_loop___at_Polynomial_repr___spec__5___rarg___closed__9);
l_List_mapTR_loop___at_Polynomial_repr___spec__5___rarg___closed__10 = _init_l_List_mapTR_loop___at_Polynomial_repr___spec__5___rarg___closed__10();
lean_mark_persistent(l_List_mapTR_loop___at_Polynomial_repr___spec__5___rarg___closed__10);
l_List_mapTR_loop___at_Polynomial_repr___spec__5___rarg___closed__11 = _init_l_List_mapTR_loop___at_Polynomial_repr___spec__5___rarg___closed__11();
lean_mark_persistent(l_List_mapTR_loop___at_Polynomial_repr___spec__5___rarg___closed__11);
l_Polynomial_repr___rarg___closed__1 = _init_l_Polynomial_repr___rarg___closed__1();
lean_mark_persistent(l_Polynomial_repr___rarg___closed__1);
l_Polynomial_repr___rarg___closed__2 = _init_l_Polynomial_repr___rarg___closed__2();
lean_mark_persistent(l_Polynomial_repr___rarg___closed__2);
l_Polynomial_repr___rarg___closed__3 = _init_l_Polynomial_repr___rarg___closed__3();
lean_mark_persistent(l_Polynomial_repr___rarg___closed__3);
l_Polynomial_repr___rarg___closed__4 = _init_l_Polynomial_repr___rarg___closed__4();
lean_mark_persistent(l_Polynomial_repr___rarg___closed__4);
l_Polynomial_repr___rarg___closed__5 = _init_l_Polynomial_repr___rarg___closed__5();
lean_mark_persistent(l_Polynomial_repr___rarg___closed__5);
l_Polynomial_repr___rarg___closed__6 = _init_l_Polynomial_repr___rarg___closed__6();
lean_mark_persistent(l_Polynomial_repr___rarg___closed__6);
l_Polynomial_repr___rarg___closed__7 = _init_l_Polynomial_repr___rarg___closed__7();
lean_mark_persistent(l_Polynomial_repr___rarg___closed__7);
l_Polynomial_repr___rarg___closed__8 = _init_l_Polynomial_repr___rarg___closed__8();
lean_mark_persistent(l_Polynomial_repr___rarg___closed__8);
l_Polynomial_repr___rarg___closed__9 = _init_l_Polynomial_repr___rarg___closed__9();
lean_mark_persistent(l_Polynomial_repr___rarg___closed__9);
l_Polynomial_repr___rarg___closed__10 = _init_l_Polynomial_repr___rarg___closed__10();
lean_mark_persistent(l_Polynomial_repr___rarg___closed__10);
l_Polynomial_repr___rarg___closed__11 = _init_l_Polynomial_repr___rarg___closed__11();
lean_mark_persistent(l_Polynomial_repr___rarg___closed__11);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
