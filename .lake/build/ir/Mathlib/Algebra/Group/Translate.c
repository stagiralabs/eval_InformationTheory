// Lean compiler output
// Module: Mathlib.Algebra.Group.Translate
// Imports: Init Mathlib.Algebra.BigOperators.Pi Mathlib.Algebra.Group.Pi.Basic Mathlib.Data.Set.Pointwise.SMul Mathlib.GroupTheory.GroupAction.DomAct.Basic
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
static lean_object* l_translate___aux__Mathlib__Algebra__Group__Translate______unexpand__translate__1___closed__2;
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
static lean_object* l_translate___aux__Mathlib__Algebra__Group__Translate______macroRules__translate__term_u03c4__1___closed__1;
static lean_object* l_translate_term_u03c4___closed__5;
LEAN_EXPORT lean_object* l_translate___aux__Mathlib__Algebra__Group__Translate______macroRules__translate__term_u03c4__1(lean_object*, lean_object*, lean_object*);
static lean_object* l_translate___aux__Mathlib__Algebra__Group__Translate______macroRules__translate__term_u03c4__1___closed__6;
lean_object* l_Lean_SourceInfo_fromRef(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_translate_term_u03c4;
static lean_object* l_translate___aux__Mathlib__Algebra__Group__Translate______macroRules__translate__term_u03c4__1___closed__3;
LEAN_EXPORT lean_object* l_translate___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_addMacroScope(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_translate___aux__Mathlib__Algebra__Group__Translate______unexpand__translate__1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
static lean_object* l_translate_term_u03c4___closed__2;
static lean_object* l_translate_term_u03c4___closed__1;
static lean_object* l_translate_term_u03c4___closed__4;
static lean_object* l_translate___aux__Mathlib__Algebra__Group__Translate______macroRules__translate__term_u03c4__1___closed__4;
LEAN_EXPORT lean_object* l_translate(lean_object*, lean_object*);
static lean_object* l_translate___aux__Mathlib__Algebra__Group__Translate______macroRules__translate__term_u03c4__1___closed__2;
static lean_object* l_translate___aux__Mathlib__Algebra__Group__Translate______macroRules__translate__term_u03c4__1___closed__5;
static lean_object* l_translate___aux__Mathlib__Algebra__Group__Translate______unexpand__translate__1___closed__1;
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_translate___aux__Mathlib__Algebra__Group__Translate______unexpand__translate__1___boxed(lean_object*, lean_object*, lean_object*);
static lean_object* l_translate_term_u03c4___closed__3;
lean_object* l_String_toSubstring_x27(lean_object*);
static lean_object* l_translate_term_u03c4___closed__6;
LEAN_EXPORT lean_object* l_translate___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_ctor_get(x_1, 2);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_apply_2(x_5, x_4, x_2);
x_7 = lean_apply_1(x_3, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_translate(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_translate___rarg), 4, 0);
return x_3;
}
}
static lean_object* _init_l_translate_term_u03c4___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("translate", 9, 9);
return x_1;
}
}
static lean_object* _init_l_translate_term_u03c4___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("termτ", 6, 5);
return x_1;
}
}
static lean_object* _init_l_translate_term_u03c4___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_translate_term_u03c4___closed__1;
x_2 = l_translate_term_u03c4___closed__2;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_translate_term_u03c4___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("τ ", 3, 2);
return x_1;
}
}
static lean_object* _init_l_translate_term_u03c4___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_translate_term_u03c4___closed__4;
x_2 = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_translate_term_u03c4___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_translate_term_u03c4___closed__3;
x_2 = lean_unsigned_to_nat(1024u);
x_3 = l_translate_term_u03c4___closed__5;
x_4 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_translate_term_u03c4() {
_start:
{
lean_object* x_1; 
x_1 = l_translate_term_u03c4___closed__6;
return x_1;
}
}
static lean_object* _init_l_translate___aux__Mathlib__Algebra__Group__Translate______macroRules__translate__term_u03c4__1___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_translate_term_u03c4___closed__1;
x_2 = l_String_toSubstring_x27(x_1);
return x_2;
}
}
static lean_object* _init_l_translate___aux__Mathlib__Algebra__Group__Translate______macroRules__translate__term_u03c4__1___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_translate_term_u03c4___closed__1;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_translate___aux__Mathlib__Algebra__Group__Translate______macroRules__translate__term_u03c4__1___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_translate___aux__Mathlib__Algebra__Group__Translate______macroRules__translate__term_u03c4__1___closed__2;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_l_translate___aux__Mathlib__Algebra__Group__Translate______macroRules__translate__term_u03c4__1___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_translate___aux__Mathlib__Algebra__Group__Translate______macroRules__translate__term_u03c4__1___closed__2;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_translate___aux__Mathlib__Algebra__Group__Translate______macroRules__translate__term_u03c4__1___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_translate___aux__Mathlib__Algebra__Group__Translate______macroRules__translate__term_u03c4__1___closed__4;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_l_translate___aux__Mathlib__Algebra__Group__Translate______macroRules__translate__term_u03c4__1___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_translate___aux__Mathlib__Algebra__Group__Translate______macroRules__translate__term_u03c4__1___closed__3;
x_2 = l_translate___aux__Mathlib__Algebra__Group__Translate______macroRules__translate__term_u03c4__1___closed__5;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_translate___aux__Mathlib__Algebra__Group__Translate______macroRules__translate__term_u03c4__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = l_translate_term_u03c4___closed__3;
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
x_13 = l_translate___aux__Mathlib__Algebra__Group__Translate______macroRules__translate__term_u03c4__1___closed__2;
x_14 = l_Lean_addMacroScope(x_12, x_13, x_11);
x_15 = l_translate___aux__Mathlib__Algebra__Group__Translate______macroRules__translate__term_u03c4__1___closed__1;
x_16 = l_translate___aux__Mathlib__Algebra__Group__Translate______macroRules__translate__term_u03c4__1___closed__6;
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
static lean_object* _init_l_translate___aux__Mathlib__Algebra__Group__Translate______unexpand__translate__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("ident", 5, 5);
return x_1;
}
}
static lean_object* _init_l_translate___aux__Mathlib__Algebra__Group__Translate______unexpand__translate__1___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_translate___aux__Mathlib__Algebra__Group__Translate______unexpand__translate__1___closed__1;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_translate___aux__Mathlib__Algebra__Group__Translate______unexpand__translate__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = l_translate___aux__Mathlib__Algebra__Group__Translate______unexpand__translate__1___closed__2;
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
x_11 = l_translate_term_u03c4___closed__4;
lean_inc(x_10);
x_12 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_12, 0, x_10);
lean_ctor_set(x_12, 1, x_11);
x_13 = l_translate_term_u03c4___closed__3;
x_14 = l_Lean_Syntax_node1(x_10, x_13, x_12);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_14);
lean_ctor_set(x_15, 1, x_3);
return x_15;
}
}
}
LEAN_EXPORT lean_object* l_translate___aux__Mathlib__Algebra__Group__Translate______unexpand__translate__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_translate___aux__Mathlib__Algebra__Group__Translate______unexpand__translate__1(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_BigOperators_Pi(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Group_Pi_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Set_Pointwise_SMul(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_GroupTheory_GroupAction_DomAct_Basic(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Algebra_Group_Translate(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_BigOperators_Pi(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Group_Pi_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Set_Pointwise_SMul(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_GroupTheory_GroupAction_DomAct_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_translate_term_u03c4___closed__1 = _init_l_translate_term_u03c4___closed__1();
lean_mark_persistent(l_translate_term_u03c4___closed__1);
l_translate_term_u03c4___closed__2 = _init_l_translate_term_u03c4___closed__2();
lean_mark_persistent(l_translate_term_u03c4___closed__2);
l_translate_term_u03c4___closed__3 = _init_l_translate_term_u03c4___closed__3();
lean_mark_persistent(l_translate_term_u03c4___closed__3);
l_translate_term_u03c4___closed__4 = _init_l_translate_term_u03c4___closed__4();
lean_mark_persistent(l_translate_term_u03c4___closed__4);
l_translate_term_u03c4___closed__5 = _init_l_translate_term_u03c4___closed__5();
lean_mark_persistent(l_translate_term_u03c4___closed__5);
l_translate_term_u03c4___closed__6 = _init_l_translate_term_u03c4___closed__6();
lean_mark_persistent(l_translate_term_u03c4___closed__6);
l_translate_term_u03c4 = _init_l_translate_term_u03c4();
lean_mark_persistent(l_translate_term_u03c4);
l_translate___aux__Mathlib__Algebra__Group__Translate______macroRules__translate__term_u03c4__1___closed__1 = _init_l_translate___aux__Mathlib__Algebra__Group__Translate______macroRules__translate__term_u03c4__1___closed__1();
lean_mark_persistent(l_translate___aux__Mathlib__Algebra__Group__Translate______macroRules__translate__term_u03c4__1___closed__1);
l_translate___aux__Mathlib__Algebra__Group__Translate______macroRules__translate__term_u03c4__1___closed__2 = _init_l_translate___aux__Mathlib__Algebra__Group__Translate______macroRules__translate__term_u03c4__1___closed__2();
lean_mark_persistent(l_translate___aux__Mathlib__Algebra__Group__Translate______macroRules__translate__term_u03c4__1___closed__2);
l_translate___aux__Mathlib__Algebra__Group__Translate______macroRules__translate__term_u03c4__1___closed__3 = _init_l_translate___aux__Mathlib__Algebra__Group__Translate______macroRules__translate__term_u03c4__1___closed__3();
lean_mark_persistent(l_translate___aux__Mathlib__Algebra__Group__Translate______macroRules__translate__term_u03c4__1___closed__3);
l_translate___aux__Mathlib__Algebra__Group__Translate______macroRules__translate__term_u03c4__1___closed__4 = _init_l_translate___aux__Mathlib__Algebra__Group__Translate______macroRules__translate__term_u03c4__1___closed__4();
lean_mark_persistent(l_translate___aux__Mathlib__Algebra__Group__Translate______macroRules__translate__term_u03c4__1___closed__4);
l_translate___aux__Mathlib__Algebra__Group__Translate______macroRules__translate__term_u03c4__1___closed__5 = _init_l_translate___aux__Mathlib__Algebra__Group__Translate______macroRules__translate__term_u03c4__1___closed__5();
lean_mark_persistent(l_translate___aux__Mathlib__Algebra__Group__Translate______macroRules__translate__term_u03c4__1___closed__5);
l_translate___aux__Mathlib__Algebra__Group__Translate______macroRules__translate__term_u03c4__1___closed__6 = _init_l_translate___aux__Mathlib__Algebra__Group__Translate______macroRules__translate__term_u03c4__1___closed__6();
lean_mark_persistent(l_translate___aux__Mathlib__Algebra__Group__Translate______macroRules__translate__term_u03c4__1___closed__6);
l_translate___aux__Mathlib__Algebra__Group__Translate______unexpand__translate__1___closed__1 = _init_l_translate___aux__Mathlib__Algebra__Group__Translate______unexpand__translate__1___closed__1();
lean_mark_persistent(l_translate___aux__Mathlib__Algebra__Group__Translate______unexpand__translate__1___closed__1);
l_translate___aux__Mathlib__Algebra__Group__Translate______unexpand__translate__1___closed__2 = _init_l_translate___aux__Mathlib__Algebra__Group__Translate______unexpand__translate__1___closed__2();
lean_mark_persistent(l_translate___aux__Mathlib__Algebra__Group__Translate______unexpand__translate__1___closed__2);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
