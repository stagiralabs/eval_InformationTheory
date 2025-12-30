// Lean compiler output
// Module: Mathlib.Data.Nat.Totient
// Imports: Init Mathlib.Algebra.CharP.Two Mathlib.Data.Nat.Cast.Field Mathlib.Data.Nat.Factorization.Basic Mathlib.Data.Nat.Factorization.Induction Mathlib.Data.Nat.Periodic
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
lean_object* lean_nat_gcd(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_filter___at_Nat_totient___spec__1___boxed(lean_object*, lean_object*);
static lean_object* l_Nat___aux__Mathlib__Data__Nat__Totient______unexpand__Nat__totient__1___closed__2;
LEAN_EXPORT lean_object* l_Nat___aux__Mathlib__Data__Nat__Totient______unexpand__Nat__totient__1___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
static lean_object* l_Nat___aux__Mathlib__Data__Nat__Totient______macroRules__Nat__term_u03c6__1___closed__3;
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
static lean_object* l_Nat___aux__Mathlib__Data__Nat__Totient______macroRules__Nat__term_u03c6__1___closed__5;
lean_object* l_Lean_SourceInfo_fromRef(lean_object*, uint8_t);
lean_object* l_List_range(lean_object*);
LEAN_EXPORT lean_object* l_Nat_totient(lean_object*);
static lean_object* l_Nat_term_u03c6___closed__6;
static lean_object* l_Nat_term_u03c6___closed__1;
lean_object* l_List_lengthTRAux___rarg(lean_object*, lean_object*);
lean_object* l_Lean_addMacroScope(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_filterTR_loop___at_Nat_totient___spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_filter___at_Nat_totient___spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat___aux__Mathlib__Data__Nat__Totient______macroRules__Nat__term_u03c6__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_term_u03c6;
static lean_object* l_Nat_term_u03c6___closed__5;
LEAN_EXPORT lean_object* l_Nat___aux__Mathlib__Data__Nat__Totient______unexpand__Nat__totient__1(lean_object*, lean_object*, lean_object*);
static lean_object* l_Nat___aux__Mathlib__Data__Nat__Totient______macroRules__Nat__term_u03c6__1___closed__1;
static lean_object* l_Nat_term_u03c6___closed__2;
static lean_object* l_Nat_term_u03c6___closed__4;
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
static lean_object* l_Nat___aux__Mathlib__Data__Nat__Totient______macroRules__Nat__term_u03c6__1___closed__6;
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
static lean_object* l_Nat___aux__Mathlib__Data__Nat__Totient______unexpand__Nat__totient__1___closed__1;
lean_object* l_Lean_Syntax_node1(lean_object*, lean_object*, lean_object*);
static lean_object* l_Nat_term_u03c6___closed__3;
static lean_object* l_Nat___aux__Mathlib__Data__Nat__Totient______macroRules__Nat__term_u03c6__1___closed__2;
lean_object* l_List_reverse___rarg(lean_object*);
LEAN_EXPORT lean_object* l_List_filterTR_loop___at_Nat_totient___spec__3___boxed(lean_object*, lean_object*, lean_object*);
static lean_object* l_Nat___aux__Mathlib__Data__Nat__Totient______macroRules__Nat__term_u03c6__1___closed__4;
LEAN_EXPORT lean_object* l_Finset_filter___at_Nat_totient___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_filter___at_Nat_totient___spec__2___boxed(lean_object*, lean_object*);
lean_object* l_String_toSubstring_x27(lean_object*);
LEAN_EXPORT lean_object* l_List_filterTR_loop___at_Nat_totient___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_4; 
x_4 = l_List_reverse___rarg(x_3);
return x_4;
}
else
{
uint8_t x_5; 
x_5 = !lean_is_exclusive(x_2);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_6 = lean_ctor_get(x_2, 0);
x_7 = lean_ctor_get(x_2, 1);
x_8 = lean_nat_gcd(x_1, x_6);
x_9 = lean_unsigned_to_nat(1u);
x_10 = lean_nat_dec_eq(x_8, x_9);
lean_dec(x_8);
if (x_10 == 0)
{
lean_free_object(x_2);
lean_dec(x_6);
x_2 = x_7;
goto _start;
}
else
{
lean_ctor_set(x_2, 1, x_3);
{
lean_object* _tmp_1 = x_7;
lean_object* _tmp_2 = x_2;
x_2 = _tmp_1;
x_3 = _tmp_2;
}
goto _start;
}
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; 
x_13 = lean_ctor_get(x_2, 0);
x_14 = lean_ctor_get(x_2, 1);
lean_inc(x_14);
lean_inc(x_13);
lean_dec(x_2);
x_15 = lean_nat_gcd(x_1, x_13);
x_16 = lean_unsigned_to_nat(1u);
x_17 = lean_nat_dec_eq(x_15, x_16);
lean_dec(x_15);
if (x_17 == 0)
{
lean_dec(x_13);
x_2 = x_14;
goto _start;
}
else
{
lean_object* x_19; 
x_19 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_19, 0, x_13);
lean_ctor_set(x_19, 1, x_3);
x_2 = x_14;
x_3 = x_19;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Multiset_filter___at_Nat_totient___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_box(0);
x_4 = l_List_filterTR_loop___at_Nat_totient___spec__3(x_1, x_2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Finset_filter___at_Nat_totient___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Multiset_filter___at_Nat_totient___spec__2(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Nat_totient(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
lean_inc(x_1);
x_2 = l_List_range(x_1);
x_3 = l_Multiset_filter___at_Nat_totient___spec__2(x_1, x_2);
lean_dec(x_1);
x_4 = lean_unsigned_to_nat(0u);
x_5 = l_List_lengthTRAux___rarg(x_3, x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_List_filterTR_loop___at_Nat_totient___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_List_filterTR_loop___at_Nat_totient___spec__3(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Multiset_filter___at_Nat_totient___spec__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Multiset_filter___at_Nat_totient___spec__2(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Finset_filter___at_Nat_totient___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Finset_filter___at_Nat_totient___spec__1(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
static lean_object* _init_l_Nat_term_u03c6___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Nat", 3, 3);
return x_1;
}
}
static lean_object* _init_l_Nat_term_u03c6___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("termφ", 6, 5);
return x_1;
}
}
static lean_object* _init_l_Nat_term_u03c6___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Nat_term_u03c6___closed__1;
x_2 = l_Nat_term_u03c6___closed__2;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Nat_term_u03c6___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("φ", 2, 1);
return x_1;
}
}
static lean_object* _init_l_Nat_term_u03c6___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Nat_term_u03c6___closed__4;
x_2 = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Nat_term_u03c6___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Nat_term_u03c6___closed__3;
x_2 = lean_unsigned_to_nat(1024u);
x_3 = l_Nat_term_u03c6___closed__5;
x_4 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Nat_term_u03c6() {
_start:
{
lean_object* x_1; 
x_1 = l_Nat_term_u03c6___closed__6;
return x_1;
}
}
static lean_object* _init_l_Nat___aux__Mathlib__Data__Nat__Totient______macroRules__Nat__term_u03c6__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Nat.totient", 11, 11);
return x_1;
}
}
static lean_object* _init_l_Nat___aux__Mathlib__Data__Nat__Totient______macroRules__Nat__term_u03c6__1___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Nat___aux__Mathlib__Data__Nat__Totient______macroRules__Nat__term_u03c6__1___closed__1;
x_2 = l_String_toSubstring_x27(x_1);
return x_2;
}
}
static lean_object* _init_l_Nat___aux__Mathlib__Data__Nat__Totient______macroRules__Nat__term_u03c6__1___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("totient", 7, 7);
return x_1;
}
}
static lean_object* _init_l_Nat___aux__Mathlib__Data__Nat__Totient______macroRules__Nat__term_u03c6__1___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Nat_term_u03c6___closed__1;
x_2 = l_Nat___aux__Mathlib__Data__Nat__Totient______macroRules__Nat__term_u03c6__1___closed__3;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Nat___aux__Mathlib__Data__Nat__Totient______macroRules__Nat__term_u03c6__1___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Nat___aux__Mathlib__Data__Nat__Totient______macroRules__Nat__term_u03c6__1___closed__4;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_l_Nat___aux__Mathlib__Data__Nat__Totient______macroRules__Nat__term_u03c6__1___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Nat___aux__Mathlib__Data__Nat__Totient______macroRules__Nat__term_u03c6__1___closed__5;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Nat___aux__Mathlib__Data__Nat__Totient______macroRules__Nat__term_u03c6__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = l_Nat_term_u03c6___closed__3;
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
lean_object* x_8; uint8_t x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
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
x_13 = l_Nat___aux__Mathlib__Data__Nat__Totient______macroRules__Nat__term_u03c6__1___closed__4;
x_14 = l_Lean_addMacroScope(x_12, x_13, x_11);
x_15 = l_Nat___aux__Mathlib__Data__Nat__Totient______macroRules__Nat__term_u03c6__1___closed__2;
x_16 = l_Nat___aux__Mathlib__Data__Nat__Totient______macroRules__Nat__term_u03c6__1___closed__6;
x_17 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_17, 0, x_10);
lean_ctor_set(x_17, 1, x_15);
lean_ctor_set(x_17, 2, x_14);
lean_ctor_set(x_17, 3, x_16);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_17);
lean_ctor_set(x_18, 1, x_3);
return x_18;
}
}
}
static lean_object* _init_l_Nat___aux__Mathlib__Data__Nat__Totient______unexpand__Nat__totient__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("ident", 5, 5);
return x_1;
}
}
static lean_object* _init_l_Nat___aux__Mathlib__Data__Nat__Totient______unexpand__Nat__totient__1___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Nat___aux__Mathlib__Data__Nat__Totient______unexpand__Nat__totient__1___closed__1;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Nat___aux__Mathlib__Data__Nat__Totient______unexpand__Nat__totient__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = l_Nat___aux__Mathlib__Data__Nat__Totient______unexpand__Nat__totient__1___closed__2;
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
lean_object* x_8; uint8_t x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_8 = l_Lean_replaceRef(x_1, x_2);
lean_dec(x_1);
x_9 = 0;
x_10 = l_Lean_SourceInfo_fromRef(x_8, x_9);
lean_dec(x_8);
x_11 = l_Nat_term_u03c6___closed__4;
lean_inc(x_10);
x_12 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_12, 0, x_10);
lean_ctor_set(x_12, 1, x_11);
x_13 = l_Nat_term_u03c6___closed__3;
x_14 = l_Lean_Syntax_node1(x_10, x_13, x_12);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_14);
lean_ctor_set(x_15, 1, x_3);
return x_15;
}
}
}
LEAN_EXPORT lean_object* l_Nat___aux__Mathlib__Data__Nat__Totient______unexpand__Nat__totient__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Nat___aux__Mathlib__Data__Nat__Totient______unexpand__Nat__totient__1(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_CharP_Two(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Nat_Cast_Field(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Nat_Factorization_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Nat_Factorization_Induction(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Nat_Periodic(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Data_Nat_Totient(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_CharP_Two(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Nat_Cast_Field(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Nat_Factorization_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Nat_Factorization_Induction(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Nat_Periodic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Nat_term_u03c6___closed__1 = _init_l_Nat_term_u03c6___closed__1();
lean_mark_persistent(l_Nat_term_u03c6___closed__1);
l_Nat_term_u03c6___closed__2 = _init_l_Nat_term_u03c6___closed__2();
lean_mark_persistent(l_Nat_term_u03c6___closed__2);
l_Nat_term_u03c6___closed__3 = _init_l_Nat_term_u03c6___closed__3();
lean_mark_persistent(l_Nat_term_u03c6___closed__3);
l_Nat_term_u03c6___closed__4 = _init_l_Nat_term_u03c6___closed__4();
lean_mark_persistent(l_Nat_term_u03c6___closed__4);
l_Nat_term_u03c6___closed__5 = _init_l_Nat_term_u03c6___closed__5();
lean_mark_persistent(l_Nat_term_u03c6___closed__5);
l_Nat_term_u03c6___closed__6 = _init_l_Nat_term_u03c6___closed__6();
lean_mark_persistent(l_Nat_term_u03c6___closed__6);
l_Nat_term_u03c6 = _init_l_Nat_term_u03c6();
lean_mark_persistent(l_Nat_term_u03c6);
l_Nat___aux__Mathlib__Data__Nat__Totient______macroRules__Nat__term_u03c6__1___closed__1 = _init_l_Nat___aux__Mathlib__Data__Nat__Totient______macroRules__Nat__term_u03c6__1___closed__1();
lean_mark_persistent(l_Nat___aux__Mathlib__Data__Nat__Totient______macroRules__Nat__term_u03c6__1___closed__1);
l_Nat___aux__Mathlib__Data__Nat__Totient______macroRules__Nat__term_u03c6__1___closed__2 = _init_l_Nat___aux__Mathlib__Data__Nat__Totient______macroRules__Nat__term_u03c6__1___closed__2();
lean_mark_persistent(l_Nat___aux__Mathlib__Data__Nat__Totient______macroRules__Nat__term_u03c6__1___closed__2);
l_Nat___aux__Mathlib__Data__Nat__Totient______macroRules__Nat__term_u03c6__1___closed__3 = _init_l_Nat___aux__Mathlib__Data__Nat__Totient______macroRules__Nat__term_u03c6__1___closed__3();
lean_mark_persistent(l_Nat___aux__Mathlib__Data__Nat__Totient______macroRules__Nat__term_u03c6__1___closed__3);
l_Nat___aux__Mathlib__Data__Nat__Totient______macroRules__Nat__term_u03c6__1___closed__4 = _init_l_Nat___aux__Mathlib__Data__Nat__Totient______macroRules__Nat__term_u03c6__1___closed__4();
lean_mark_persistent(l_Nat___aux__Mathlib__Data__Nat__Totient______macroRules__Nat__term_u03c6__1___closed__4);
l_Nat___aux__Mathlib__Data__Nat__Totient______macroRules__Nat__term_u03c6__1___closed__5 = _init_l_Nat___aux__Mathlib__Data__Nat__Totient______macroRules__Nat__term_u03c6__1___closed__5();
lean_mark_persistent(l_Nat___aux__Mathlib__Data__Nat__Totient______macroRules__Nat__term_u03c6__1___closed__5);
l_Nat___aux__Mathlib__Data__Nat__Totient______macroRules__Nat__term_u03c6__1___closed__6 = _init_l_Nat___aux__Mathlib__Data__Nat__Totient______macroRules__Nat__term_u03c6__1___closed__6();
lean_mark_persistent(l_Nat___aux__Mathlib__Data__Nat__Totient______macroRules__Nat__term_u03c6__1___closed__6);
l_Nat___aux__Mathlib__Data__Nat__Totient______unexpand__Nat__totient__1___closed__1 = _init_l_Nat___aux__Mathlib__Data__Nat__Totient______unexpand__Nat__totient__1___closed__1();
lean_mark_persistent(l_Nat___aux__Mathlib__Data__Nat__Totient______unexpand__Nat__totient__1___closed__1);
l_Nat___aux__Mathlib__Data__Nat__Totient______unexpand__Nat__totient__1___closed__2 = _init_l_Nat___aux__Mathlib__Data__Nat__Totient______unexpand__Nat__totient__1___closed__2();
lean_mark_persistent(l_Nat___aux__Mathlib__Data__Nat__Totient______unexpand__Nat__totient__1___closed__2);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
