// Lean compiler output
// Module: Mathlib.MeasureTheory.Function.EssSup
// Imports: Init Mathlib.MeasureTheory.Constructions.BorelSpace.Order Mathlib.MeasureTheory.Measure.Count Mathlib.Order.Filter.ENNReal Mathlib.Probability.UniformOn
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
lean_object* l_Filter_limsup___rarg(lean_object*, lean_object*, lean_object*);
static lean_object* l___auto____x40_Mathlib_MeasureTheory_Function_EssSup___hyg_1146____closed__6;
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
static lean_object* l___auto____x40_Mathlib_MeasureTheory_Function_EssSup___hyg_1146____closed__4;
lean_object* lean_array_push(lean_object*, lean_object*);
static lean_object* l___auto____x40_Mathlib_MeasureTheory_Function_EssSup___hyg_1146____closed__20;
LEAN_EXPORT lean_object* l___auto____x40_Mathlib_MeasureTheory_Function_EssSup___hyg_1146_;
static lean_object* l___auto____x40_Mathlib_MeasureTheory_Function_EssSup___hyg_1146____closed__18;
LEAN_EXPORT lean_object* l___auto____x40_Mathlib_MeasureTheory_Function_EssSup___hyg_1220_;
static lean_object* l___auto____x40_Mathlib_MeasureTheory_Function_EssSup___hyg_1146____closed__15;
static lean_object* l___auto____x40_Mathlib_MeasureTheory_Function_EssSup___hyg_1146____closed__23;
LEAN_EXPORT lean_object* l_essInf(lean_object*, lean_object*);
static lean_object* l___auto____x40_Mathlib_MeasureTheory_Function_EssSup___hyg_1146____closed__16;
static lean_object* l___auto____x40_Mathlib_MeasureTheory_Function_EssSup___hyg_1146____closed__9;
LEAN_EXPORT lean_object* l_essSup___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___auto____x40_Mathlib_MeasureTheory_Function_EssSup___hyg_1146____closed__12;
static lean_object* l___auto____x40_Mathlib_MeasureTheory_Function_EssSup___hyg_1146____closed__22;
static lean_object* l___auto____x40_Mathlib_MeasureTheory_Function_EssSup___hyg_1146____closed__13;
static lean_object* l___auto____x40_Mathlib_MeasureTheory_Function_EssSup___hyg_1146____closed__17;
LEAN_EXPORT lean_object* l___auto____x40_Mathlib_MeasureTheory_Function_EssSup___hyg_1401_;
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
static lean_object* l___auto____x40_Mathlib_MeasureTheory_Function_EssSup___hyg_1146____closed__5;
static lean_object* l___auto____x40_Mathlib_MeasureTheory_Function_EssSup___hyg_1146____closed__14;
static lean_object* l___auto____x40_Mathlib_MeasureTheory_Function_EssSup___hyg_1146____closed__2;
static lean_object* l___auto____x40_Mathlib_MeasureTheory_Function_EssSup___hyg_1146____closed__7;
LEAN_EXPORT lean_object* l___auto____x40_Mathlib_MeasureTheory_Function_EssSup___hyg_1566_;
lean_object* l_Filter_liminf___rarg(lean_object*, lean_object*, lean_object*);
static lean_object* l___auto____x40_Mathlib_MeasureTheory_Function_EssSup___hyg_1146____closed__10;
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_essInf___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___auto____x40_Mathlib_MeasureTheory_Function_EssSup___hyg_1146____closed__11;
LEAN_EXPORT lean_object* l___auto____x40_Mathlib_MeasureTheory_Function_EssSup___hyg_1478_;
static lean_object* l___auto____x40_Mathlib_MeasureTheory_Function_EssSup___hyg_1146____closed__3;
static lean_object* l___auto____x40_Mathlib_MeasureTheory_Function_EssSup___hyg_1146____closed__1;
static lean_object* l___auto____x40_Mathlib_MeasureTheory_Function_EssSup___hyg_1146____closed__21;
LEAN_EXPORT lean_object* l___auto____x40_Mathlib_MeasureTheory_Function_EssSup___hyg_1324_;
static lean_object* l___auto____x40_Mathlib_MeasureTheory_Function_EssSup___hyg_1146____closed__8;
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_essSup(lean_object*, lean_object*);
static lean_object* l___auto____x40_Mathlib_MeasureTheory_Function_EssSup___hyg_1146____closed__19;
LEAN_EXPORT lean_object* l_essSup___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_essInf___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_essSup___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_5, 0, lean_box(0));
x_6 = l_Filter_limsup___rarg(x_1, x_3, x_5);
lean_dec(x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_essSup(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_essSup___rarg___boxed), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_essSup___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_essSup___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_essInf___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_5, 0, lean_box(0));
x_6 = l_Filter_liminf___rarg(x_1, x_3, x_5);
lean_dec(x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_essInf(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_essInf___rarg___boxed), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_essInf___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_essInf___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_5;
}
}
static lean_object* _init_l___auto____x40_Mathlib_MeasureTheory_Function_EssSup___hyg_1146____closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Lean", 4, 4);
return x_1;
}
}
static lean_object* _init_l___auto____x40_Mathlib_MeasureTheory_Function_EssSup___hyg_1146____closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Parser", 6, 6);
return x_1;
}
}
static lean_object* _init_l___auto____x40_Mathlib_MeasureTheory_Function_EssSup___hyg_1146____closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Tactic", 6, 6);
return x_1;
}
}
static lean_object* _init_l___auto____x40_Mathlib_MeasureTheory_Function_EssSup___hyg_1146____closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("tacticSeq", 9, 9);
return x_1;
}
}
static lean_object* _init_l___auto____x40_Mathlib_MeasureTheory_Function_EssSup___hyg_1146____closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l___auto____x40_Mathlib_MeasureTheory_Function_EssSup___hyg_1146____closed__1;
x_2 = l___auto____x40_Mathlib_MeasureTheory_Function_EssSup___hyg_1146____closed__2;
x_3 = l___auto____x40_Mathlib_MeasureTheory_Function_EssSup___hyg_1146____closed__3;
x_4 = l___auto____x40_Mathlib_MeasureTheory_Function_EssSup___hyg_1146____closed__4;
x_5 = l_Lean_Name_mkStr4(x_1, x_2, x_3, x_4);
return x_5;
}
}
static lean_object* _init_l___auto____x40_Mathlib_MeasureTheory_Function_EssSup___hyg_1146____closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = lean_mk_empty_array_with_capacity(x_1);
return x_2;
}
}
static lean_object* _init_l___auto____x40_Mathlib_MeasureTheory_Function_EssSup___hyg_1146____closed__7() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("tacticSeq1Indented", 18, 18);
return x_1;
}
}
static lean_object* _init_l___auto____x40_Mathlib_MeasureTheory_Function_EssSup___hyg_1146____closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l___auto____x40_Mathlib_MeasureTheory_Function_EssSup___hyg_1146____closed__1;
x_2 = l___auto____x40_Mathlib_MeasureTheory_Function_EssSup___hyg_1146____closed__2;
x_3 = l___auto____x40_Mathlib_MeasureTheory_Function_EssSup___hyg_1146____closed__3;
x_4 = l___auto____x40_Mathlib_MeasureTheory_Function_EssSup___hyg_1146____closed__7;
x_5 = l_Lean_Name_mkStr4(x_1, x_2, x_3, x_4);
return x_5;
}
}
static lean_object* _init_l___auto____x40_Mathlib_MeasureTheory_Function_EssSup___hyg_1146____closed__9() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("null", 4, 4);
return x_1;
}
}
static lean_object* _init_l___auto____x40_Mathlib_MeasureTheory_Function_EssSup___hyg_1146____closed__10() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l___auto____x40_Mathlib_MeasureTheory_Function_EssSup___hyg_1146____closed__9;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___auto____x40_Mathlib_MeasureTheory_Function_EssSup___hyg_1146____closed__11() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Filter", 6, 6);
return x_1;
}
}
static lean_object* _init_l___auto____x40_Mathlib_MeasureTheory_Function_EssSup___hyg_1146____closed__12() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("tacticIsBoundedDefault", 22, 22);
return x_1;
}
}
static lean_object* _init_l___auto____x40_Mathlib_MeasureTheory_Function_EssSup___hyg_1146____closed__13() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___auto____x40_Mathlib_MeasureTheory_Function_EssSup___hyg_1146____closed__11;
x_2 = l___auto____x40_Mathlib_MeasureTheory_Function_EssSup___hyg_1146____closed__12;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___auto____x40_Mathlib_MeasureTheory_Function_EssSup___hyg_1146____closed__14() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("isBoundedDefault", 16, 16);
return x_1;
}
}
static lean_object* _init_l___auto____x40_Mathlib_MeasureTheory_Function_EssSup___hyg_1146____closed__15() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(2);
x_2 = l___auto____x40_Mathlib_MeasureTheory_Function_EssSup___hyg_1146____closed__14;
x_3 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l___auto____x40_Mathlib_MeasureTheory_Function_EssSup___hyg_1146____closed__16() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___auto____x40_Mathlib_MeasureTheory_Function_EssSup___hyg_1146____closed__6;
x_2 = l___auto____x40_Mathlib_MeasureTheory_Function_EssSup___hyg_1146____closed__15;
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___auto____x40_Mathlib_MeasureTheory_Function_EssSup___hyg_1146____closed__17() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = lean_box(2);
x_2 = l___auto____x40_Mathlib_MeasureTheory_Function_EssSup___hyg_1146____closed__13;
x_3 = l___auto____x40_Mathlib_MeasureTheory_Function_EssSup___hyg_1146____closed__16;
x_4 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l___auto____x40_Mathlib_MeasureTheory_Function_EssSup___hyg_1146____closed__18() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___auto____x40_Mathlib_MeasureTheory_Function_EssSup___hyg_1146____closed__6;
x_2 = l___auto____x40_Mathlib_MeasureTheory_Function_EssSup___hyg_1146____closed__17;
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___auto____x40_Mathlib_MeasureTheory_Function_EssSup___hyg_1146____closed__19() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = lean_box(2);
x_2 = l___auto____x40_Mathlib_MeasureTheory_Function_EssSup___hyg_1146____closed__10;
x_3 = l___auto____x40_Mathlib_MeasureTheory_Function_EssSup___hyg_1146____closed__18;
x_4 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l___auto____x40_Mathlib_MeasureTheory_Function_EssSup___hyg_1146____closed__20() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___auto____x40_Mathlib_MeasureTheory_Function_EssSup___hyg_1146____closed__6;
x_2 = l___auto____x40_Mathlib_MeasureTheory_Function_EssSup___hyg_1146____closed__19;
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___auto____x40_Mathlib_MeasureTheory_Function_EssSup___hyg_1146____closed__21() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = lean_box(2);
x_2 = l___auto____x40_Mathlib_MeasureTheory_Function_EssSup___hyg_1146____closed__8;
x_3 = l___auto____x40_Mathlib_MeasureTheory_Function_EssSup___hyg_1146____closed__20;
x_4 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l___auto____x40_Mathlib_MeasureTheory_Function_EssSup___hyg_1146____closed__22() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___auto____x40_Mathlib_MeasureTheory_Function_EssSup___hyg_1146____closed__6;
x_2 = l___auto____x40_Mathlib_MeasureTheory_Function_EssSup___hyg_1146____closed__21;
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___auto____x40_Mathlib_MeasureTheory_Function_EssSup___hyg_1146____closed__23() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = lean_box(2);
x_2 = l___auto____x40_Mathlib_MeasureTheory_Function_EssSup___hyg_1146____closed__5;
x_3 = l___auto____x40_Mathlib_MeasureTheory_Function_EssSup___hyg_1146____closed__22;
x_4 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l___auto____x40_Mathlib_MeasureTheory_Function_EssSup___hyg_1146_() {
_start:
{
lean_object* x_1; 
x_1 = l___auto____x40_Mathlib_MeasureTheory_Function_EssSup___hyg_1146____closed__23;
return x_1;
}
}
static lean_object* _init_l___auto____x40_Mathlib_MeasureTheory_Function_EssSup___hyg_1220_() {
_start:
{
lean_object* x_1; 
x_1 = l___auto____x40_Mathlib_MeasureTheory_Function_EssSup___hyg_1146____closed__23;
return x_1;
}
}
static lean_object* _init_l___auto____x40_Mathlib_MeasureTheory_Function_EssSup___hyg_1324_() {
_start:
{
lean_object* x_1; 
x_1 = l___auto____x40_Mathlib_MeasureTheory_Function_EssSup___hyg_1146____closed__23;
return x_1;
}
}
static lean_object* _init_l___auto____x40_Mathlib_MeasureTheory_Function_EssSup___hyg_1401_() {
_start:
{
lean_object* x_1; 
x_1 = l___auto____x40_Mathlib_MeasureTheory_Function_EssSup___hyg_1146____closed__23;
return x_1;
}
}
static lean_object* _init_l___auto____x40_Mathlib_MeasureTheory_Function_EssSup___hyg_1478_() {
_start:
{
lean_object* x_1; 
x_1 = l___auto____x40_Mathlib_MeasureTheory_Function_EssSup___hyg_1146____closed__23;
return x_1;
}
}
static lean_object* _init_l___auto____x40_Mathlib_MeasureTheory_Function_EssSup___hyg_1566_() {
_start:
{
lean_object* x_1; 
x_1 = l___auto____x40_Mathlib_MeasureTheory_Function_EssSup___hyg_1146____closed__23;
return x_1;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_MeasureTheory_Constructions_BorelSpace_Order(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_MeasureTheory_Measure_Count(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Order_Filter_ENNReal(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Probability_UniformOn(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_MeasureTheory_Function_EssSup(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_MeasureTheory_Constructions_BorelSpace_Order(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_MeasureTheory_Measure_Count(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Order_Filter_ENNReal(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Probability_UniformOn(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___auto____x40_Mathlib_MeasureTheory_Function_EssSup___hyg_1146____closed__1 = _init_l___auto____x40_Mathlib_MeasureTheory_Function_EssSup___hyg_1146____closed__1();
lean_mark_persistent(l___auto____x40_Mathlib_MeasureTheory_Function_EssSup___hyg_1146____closed__1);
l___auto____x40_Mathlib_MeasureTheory_Function_EssSup___hyg_1146____closed__2 = _init_l___auto____x40_Mathlib_MeasureTheory_Function_EssSup___hyg_1146____closed__2();
lean_mark_persistent(l___auto____x40_Mathlib_MeasureTheory_Function_EssSup___hyg_1146____closed__2);
l___auto____x40_Mathlib_MeasureTheory_Function_EssSup___hyg_1146____closed__3 = _init_l___auto____x40_Mathlib_MeasureTheory_Function_EssSup___hyg_1146____closed__3();
lean_mark_persistent(l___auto____x40_Mathlib_MeasureTheory_Function_EssSup___hyg_1146____closed__3);
l___auto____x40_Mathlib_MeasureTheory_Function_EssSup___hyg_1146____closed__4 = _init_l___auto____x40_Mathlib_MeasureTheory_Function_EssSup___hyg_1146____closed__4();
lean_mark_persistent(l___auto____x40_Mathlib_MeasureTheory_Function_EssSup___hyg_1146____closed__4);
l___auto____x40_Mathlib_MeasureTheory_Function_EssSup___hyg_1146____closed__5 = _init_l___auto____x40_Mathlib_MeasureTheory_Function_EssSup___hyg_1146____closed__5();
lean_mark_persistent(l___auto____x40_Mathlib_MeasureTheory_Function_EssSup___hyg_1146____closed__5);
l___auto____x40_Mathlib_MeasureTheory_Function_EssSup___hyg_1146____closed__6 = _init_l___auto____x40_Mathlib_MeasureTheory_Function_EssSup___hyg_1146____closed__6();
lean_mark_persistent(l___auto____x40_Mathlib_MeasureTheory_Function_EssSup___hyg_1146____closed__6);
l___auto____x40_Mathlib_MeasureTheory_Function_EssSup___hyg_1146____closed__7 = _init_l___auto____x40_Mathlib_MeasureTheory_Function_EssSup___hyg_1146____closed__7();
lean_mark_persistent(l___auto____x40_Mathlib_MeasureTheory_Function_EssSup___hyg_1146____closed__7);
l___auto____x40_Mathlib_MeasureTheory_Function_EssSup___hyg_1146____closed__8 = _init_l___auto____x40_Mathlib_MeasureTheory_Function_EssSup___hyg_1146____closed__8();
lean_mark_persistent(l___auto____x40_Mathlib_MeasureTheory_Function_EssSup___hyg_1146____closed__8);
l___auto____x40_Mathlib_MeasureTheory_Function_EssSup___hyg_1146____closed__9 = _init_l___auto____x40_Mathlib_MeasureTheory_Function_EssSup___hyg_1146____closed__9();
lean_mark_persistent(l___auto____x40_Mathlib_MeasureTheory_Function_EssSup___hyg_1146____closed__9);
l___auto____x40_Mathlib_MeasureTheory_Function_EssSup___hyg_1146____closed__10 = _init_l___auto____x40_Mathlib_MeasureTheory_Function_EssSup___hyg_1146____closed__10();
lean_mark_persistent(l___auto____x40_Mathlib_MeasureTheory_Function_EssSup___hyg_1146____closed__10);
l___auto____x40_Mathlib_MeasureTheory_Function_EssSup___hyg_1146____closed__11 = _init_l___auto____x40_Mathlib_MeasureTheory_Function_EssSup___hyg_1146____closed__11();
lean_mark_persistent(l___auto____x40_Mathlib_MeasureTheory_Function_EssSup___hyg_1146____closed__11);
l___auto____x40_Mathlib_MeasureTheory_Function_EssSup___hyg_1146____closed__12 = _init_l___auto____x40_Mathlib_MeasureTheory_Function_EssSup___hyg_1146____closed__12();
lean_mark_persistent(l___auto____x40_Mathlib_MeasureTheory_Function_EssSup___hyg_1146____closed__12);
l___auto____x40_Mathlib_MeasureTheory_Function_EssSup___hyg_1146____closed__13 = _init_l___auto____x40_Mathlib_MeasureTheory_Function_EssSup___hyg_1146____closed__13();
lean_mark_persistent(l___auto____x40_Mathlib_MeasureTheory_Function_EssSup___hyg_1146____closed__13);
l___auto____x40_Mathlib_MeasureTheory_Function_EssSup___hyg_1146____closed__14 = _init_l___auto____x40_Mathlib_MeasureTheory_Function_EssSup___hyg_1146____closed__14();
lean_mark_persistent(l___auto____x40_Mathlib_MeasureTheory_Function_EssSup___hyg_1146____closed__14);
l___auto____x40_Mathlib_MeasureTheory_Function_EssSup___hyg_1146____closed__15 = _init_l___auto____x40_Mathlib_MeasureTheory_Function_EssSup___hyg_1146____closed__15();
lean_mark_persistent(l___auto____x40_Mathlib_MeasureTheory_Function_EssSup___hyg_1146____closed__15);
l___auto____x40_Mathlib_MeasureTheory_Function_EssSup___hyg_1146____closed__16 = _init_l___auto____x40_Mathlib_MeasureTheory_Function_EssSup___hyg_1146____closed__16();
lean_mark_persistent(l___auto____x40_Mathlib_MeasureTheory_Function_EssSup___hyg_1146____closed__16);
l___auto____x40_Mathlib_MeasureTheory_Function_EssSup___hyg_1146____closed__17 = _init_l___auto____x40_Mathlib_MeasureTheory_Function_EssSup___hyg_1146____closed__17();
lean_mark_persistent(l___auto____x40_Mathlib_MeasureTheory_Function_EssSup___hyg_1146____closed__17);
l___auto____x40_Mathlib_MeasureTheory_Function_EssSup___hyg_1146____closed__18 = _init_l___auto____x40_Mathlib_MeasureTheory_Function_EssSup___hyg_1146____closed__18();
lean_mark_persistent(l___auto____x40_Mathlib_MeasureTheory_Function_EssSup___hyg_1146____closed__18);
l___auto____x40_Mathlib_MeasureTheory_Function_EssSup___hyg_1146____closed__19 = _init_l___auto____x40_Mathlib_MeasureTheory_Function_EssSup___hyg_1146____closed__19();
lean_mark_persistent(l___auto____x40_Mathlib_MeasureTheory_Function_EssSup___hyg_1146____closed__19);
l___auto____x40_Mathlib_MeasureTheory_Function_EssSup___hyg_1146____closed__20 = _init_l___auto____x40_Mathlib_MeasureTheory_Function_EssSup___hyg_1146____closed__20();
lean_mark_persistent(l___auto____x40_Mathlib_MeasureTheory_Function_EssSup___hyg_1146____closed__20);
l___auto____x40_Mathlib_MeasureTheory_Function_EssSup___hyg_1146____closed__21 = _init_l___auto____x40_Mathlib_MeasureTheory_Function_EssSup___hyg_1146____closed__21();
lean_mark_persistent(l___auto____x40_Mathlib_MeasureTheory_Function_EssSup___hyg_1146____closed__21);
l___auto____x40_Mathlib_MeasureTheory_Function_EssSup___hyg_1146____closed__22 = _init_l___auto____x40_Mathlib_MeasureTheory_Function_EssSup___hyg_1146____closed__22();
lean_mark_persistent(l___auto____x40_Mathlib_MeasureTheory_Function_EssSup___hyg_1146____closed__22);
l___auto____x40_Mathlib_MeasureTheory_Function_EssSup___hyg_1146____closed__23 = _init_l___auto____x40_Mathlib_MeasureTheory_Function_EssSup___hyg_1146____closed__23();
lean_mark_persistent(l___auto____x40_Mathlib_MeasureTheory_Function_EssSup___hyg_1146____closed__23);
l___auto____x40_Mathlib_MeasureTheory_Function_EssSup___hyg_1146_ = _init_l___auto____x40_Mathlib_MeasureTheory_Function_EssSup___hyg_1146_();
lean_mark_persistent(l___auto____x40_Mathlib_MeasureTheory_Function_EssSup___hyg_1146_);
l___auto____x40_Mathlib_MeasureTheory_Function_EssSup___hyg_1220_ = _init_l___auto____x40_Mathlib_MeasureTheory_Function_EssSup___hyg_1220_();
lean_mark_persistent(l___auto____x40_Mathlib_MeasureTheory_Function_EssSup___hyg_1220_);
l___auto____x40_Mathlib_MeasureTheory_Function_EssSup___hyg_1324_ = _init_l___auto____x40_Mathlib_MeasureTheory_Function_EssSup___hyg_1324_();
lean_mark_persistent(l___auto____x40_Mathlib_MeasureTheory_Function_EssSup___hyg_1324_);
l___auto____x40_Mathlib_MeasureTheory_Function_EssSup___hyg_1401_ = _init_l___auto____x40_Mathlib_MeasureTheory_Function_EssSup___hyg_1401_();
lean_mark_persistent(l___auto____x40_Mathlib_MeasureTheory_Function_EssSup___hyg_1401_);
l___auto____x40_Mathlib_MeasureTheory_Function_EssSup___hyg_1478_ = _init_l___auto____x40_Mathlib_MeasureTheory_Function_EssSup___hyg_1478_();
lean_mark_persistent(l___auto____x40_Mathlib_MeasureTheory_Function_EssSup___hyg_1478_);
l___auto____x40_Mathlib_MeasureTheory_Function_EssSup___hyg_1566_ = _init_l___auto____x40_Mathlib_MeasureTheory_Function_EssSup___hyg_1566_();
lean_mark_persistent(l___auto____x40_Mathlib_MeasureTheory_Function_EssSup___hyg_1566_);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
