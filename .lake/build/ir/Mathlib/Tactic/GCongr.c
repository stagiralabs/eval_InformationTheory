// Lean compiler output
// Module: Mathlib.Tactic.GCongr
// Imports: Init Mathlib.Tactic.Positivity.Core Mathlib.Tactic.GCongr.CoreAttrs
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
static lean_object* l___aux__Mathlib__Tactic__GCongr______macroRules__Mathlib__Tactic__GCongr__tacticGcongr__discharger__1___closed__2;
static lean_object* l___aux__Mathlib__Tactic__GCongr______macroRules__Mathlib__Tactic__GCongr__tacticGcongr__discharger__1___closed__4;
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___aux__Mathlib__Tactic__GCongr______macroRules__Mathlib__Tactic__GCongr__tacticGcongr__discharger__1___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_SourceInfo_fromRef(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l___aux__Mathlib__Tactic__GCongr______macroRules__Mathlib__Tactic__GCongr__tacticGcongr__discharger__1(lean_object*, lean_object*, lean_object*);
static lean_object* l___aux__Mathlib__Tactic__GCongr______macroRules__Mathlib__Tactic__GCongr__tacticGcongr__discharger__1___closed__7;
static lean_object* l___aux__Mathlib__Tactic__GCongr______macroRules__Mathlib__Tactic__GCongr__tacticGcongr__discharger__1___closed__6;
static lean_object* l___aux__Mathlib__Tactic__GCongr______macroRules__Mathlib__Tactic__GCongr__tacticGcongr__discharger__1___closed__1;
lean_object* l_Lean_Syntax_node1(lean_object*, lean_object*, lean_object*);
static lean_object* l___aux__Mathlib__Tactic__GCongr______macroRules__Mathlib__Tactic__GCongr__tacticGcongr__discharger__1___closed__5;
static lean_object* l___aux__Mathlib__Tactic__GCongr______macroRules__Mathlib__Tactic__GCongr__tacticGcongr__discharger__1___closed__8;
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___aux__Mathlib__Tactic__GCongr______macroRules__Mathlib__Tactic__GCongr__tacticGcongr__discharger__1___closed__3;
static lean_object* _init_l___aux__Mathlib__Tactic__GCongr______macroRules__Mathlib__Tactic__GCongr__tacticGcongr__discharger__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Mathlib", 7, 7);
return x_1;
}
}
static lean_object* _init_l___aux__Mathlib__Tactic__GCongr______macroRules__Mathlib__Tactic__GCongr__tacticGcongr__discharger__1___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Tactic", 6, 6);
return x_1;
}
}
static lean_object* _init_l___aux__Mathlib__Tactic__GCongr______macroRules__Mathlib__Tactic__GCongr__tacticGcongr__discharger__1___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("GCongr", 6, 6);
return x_1;
}
}
static lean_object* _init_l___aux__Mathlib__Tactic__GCongr______macroRules__Mathlib__Tactic__GCongr__tacticGcongr__discharger__1___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("tacticGcongr_discharger", 23, 23);
return x_1;
}
}
static lean_object* _init_l___aux__Mathlib__Tactic__GCongr______macroRules__Mathlib__Tactic__GCongr__tacticGcongr__discharger__1___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l___aux__Mathlib__Tactic__GCongr______macroRules__Mathlib__Tactic__GCongr__tacticGcongr__discharger__1___closed__1;
x_2 = l___aux__Mathlib__Tactic__GCongr______macroRules__Mathlib__Tactic__GCongr__tacticGcongr__discharger__1___closed__2;
x_3 = l___aux__Mathlib__Tactic__GCongr______macroRules__Mathlib__Tactic__GCongr__tacticGcongr__discharger__1___closed__3;
x_4 = l___aux__Mathlib__Tactic__GCongr______macroRules__Mathlib__Tactic__GCongr__tacticGcongr__discharger__1___closed__4;
x_5 = l_Lean_Name_mkStr4(x_1, x_2, x_3, x_4);
return x_5;
}
}
static lean_object* _init_l___aux__Mathlib__Tactic__GCongr______macroRules__Mathlib__Tactic__GCongr__tacticGcongr__discharger__1___closed__6() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Positivity", 10, 10);
return x_1;
}
}
static lean_object* _init_l___aux__Mathlib__Tactic__GCongr______macroRules__Mathlib__Tactic__GCongr__tacticGcongr__discharger__1___closed__7() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("positivity", 10, 10);
return x_1;
}
}
static lean_object* _init_l___aux__Mathlib__Tactic__GCongr______macroRules__Mathlib__Tactic__GCongr__tacticGcongr__discharger__1___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l___aux__Mathlib__Tactic__GCongr______macroRules__Mathlib__Tactic__GCongr__tacticGcongr__discharger__1___closed__1;
x_2 = l___aux__Mathlib__Tactic__GCongr______macroRules__Mathlib__Tactic__GCongr__tacticGcongr__discharger__1___closed__2;
x_3 = l___aux__Mathlib__Tactic__GCongr______macroRules__Mathlib__Tactic__GCongr__tacticGcongr__discharger__1___closed__6;
x_4 = l___aux__Mathlib__Tactic__GCongr______macroRules__Mathlib__Tactic__GCongr__tacticGcongr__discharger__1___closed__7;
x_5 = l_Lean_Name_mkStr4(x_1, x_2, x_3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l___aux__Mathlib__Tactic__GCongr______macroRules__Mathlib__Tactic__GCongr__tacticGcongr__discharger__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = l___aux__Mathlib__Tactic__GCongr______macroRules__Mathlib__Tactic__GCongr__tacticGcongr__discharger__1___closed__5;
x_5 = l_Lean_Syntax_isOfKind(x_1, x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_box(1);
x_7 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_3);
return x_7;
}
else
{
lean_object* x_8; uint8_t x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_8 = lean_ctor_get(x_2, 5);
x_9 = 0;
x_10 = l_Lean_SourceInfo_fromRef(x_8, x_9);
x_11 = l___aux__Mathlib__Tactic__GCongr______macroRules__Mathlib__Tactic__GCongr__tacticGcongr__discharger__1___closed__7;
lean_inc(x_10);
x_12 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_12, 0, x_10);
lean_ctor_set(x_12, 1, x_11);
x_13 = l___aux__Mathlib__Tactic__GCongr______macroRules__Mathlib__Tactic__GCongr__tacticGcongr__discharger__1___closed__8;
x_14 = l_Lean_Syntax_node1(x_10, x_13, x_12);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_14);
lean_ctor_set(x_15, 1, x_3);
return x_15;
}
}
}
LEAN_EXPORT lean_object* l___aux__Mathlib__Tactic__GCongr______macroRules__Mathlib__Tactic__GCongr__tacticGcongr__discharger__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l___aux__Mathlib__Tactic__GCongr______macroRules__Mathlib__Tactic__GCongr__tacticGcongr__discharger__1(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Tactic_Positivity_Core(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Tactic_GCongr_CoreAttrs(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Tactic_GCongr(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Tactic_Positivity_Core(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Tactic_GCongr_CoreAttrs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___aux__Mathlib__Tactic__GCongr______macroRules__Mathlib__Tactic__GCongr__tacticGcongr__discharger__1___closed__1 = _init_l___aux__Mathlib__Tactic__GCongr______macroRules__Mathlib__Tactic__GCongr__tacticGcongr__discharger__1___closed__1();
lean_mark_persistent(l___aux__Mathlib__Tactic__GCongr______macroRules__Mathlib__Tactic__GCongr__tacticGcongr__discharger__1___closed__1);
l___aux__Mathlib__Tactic__GCongr______macroRules__Mathlib__Tactic__GCongr__tacticGcongr__discharger__1___closed__2 = _init_l___aux__Mathlib__Tactic__GCongr______macroRules__Mathlib__Tactic__GCongr__tacticGcongr__discharger__1___closed__2();
lean_mark_persistent(l___aux__Mathlib__Tactic__GCongr______macroRules__Mathlib__Tactic__GCongr__tacticGcongr__discharger__1___closed__2);
l___aux__Mathlib__Tactic__GCongr______macroRules__Mathlib__Tactic__GCongr__tacticGcongr__discharger__1___closed__3 = _init_l___aux__Mathlib__Tactic__GCongr______macroRules__Mathlib__Tactic__GCongr__tacticGcongr__discharger__1___closed__3();
lean_mark_persistent(l___aux__Mathlib__Tactic__GCongr______macroRules__Mathlib__Tactic__GCongr__tacticGcongr__discharger__1___closed__3);
l___aux__Mathlib__Tactic__GCongr______macroRules__Mathlib__Tactic__GCongr__tacticGcongr__discharger__1___closed__4 = _init_l___aux__Mathlib__Tactic__GCongr______macroRules__Mathlib__Tactic__GCongr__tacticGcongr__discharger__1___closed__4();
lean_mark_persistent(l___aux__Mathlib__Tactic__GCongr______macroRules__Mathlib__Tactic__GCongr__tacticGcongr__discharger__1___closed__4);
l___aux__Mathlib__Tactic__GCongr______macroRules__Mathlib__Tactic__GCongr__tacticGcongr__discharger__1___closed__5 = _init_l___aux__Mathlib__Tactic__GCongr______macroRules__Mathlib__Tactic__GCongr__tacticGcongr__discharger__1___closed__5();
lean_mark_persistent(l___aux__Mathlib__Tactic__GCongr______macroRules__Mathlib__Tactic__GCongr__tacticGcongr__discharger__1___closed__5);
l___aux__Mathlib__Tactic__GCongr______macroRules__Mathlib__Tactic__GCongr__tacticGcongr__discharger__1___closed__6 = _init_l___aux__Mathlib__Tactic__GCongr______macroRules__Mathlib__Tactic__GCongr__tacticGcongr__discharger__1___closed__6();
lean_mark_persistent(l___aux__Mathlib__Tactic__GCongr______macroRules__Mathlib__Tactic__GCongr__tacticGcongr__discharger__1___closed__6);
l___aux__Mathlib__Tactic__GCongr______macroRules__Mathlib__Tactic__GCongr__tacticGcongr__discharger__1___closed__7 = _init_l___aux__Mathlib__Tactic__GCongr______macroRules__Mathlib__Tactic__GCongr__tacticGcongr__discharger__1___closed__7();
lean_mark_persistent(l___aux__Mathlib__Tactic__GCongr______macroRules__Mathlib__Tactic__GCongr__tacticGcongr__discharger__1___closed__7);
l___aux__Mathlib__Tactic__GCongr______macroRules__Mathlib__Tactic__GCongr__tacticGcongr__discharger__1___closed__8 = _init_l___aux__Mathlib__Tactic__GCongr______macroRules__Mathlib__Tactic__GCongr__tacticGcongr__discharger__1___closed__8();
lean_mark_persistent(l___aux__Mathlib__Tactic__GCongr______macroRules__Mathlib__Tactic__GCongr__tacticGcongr__discharger__1___closed__8);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
