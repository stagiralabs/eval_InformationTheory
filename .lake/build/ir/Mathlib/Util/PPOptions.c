// Lean compiler output
// Module: Mathlib.Util.PPOptions
// Imports: Init Mathlib.Init
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
LEAN_EXPORT lean_object* l_Mathlib_pp_mathlib_binderPredicates;
LEAN_EXPORT lean_object* l_Mathlib_getPPBinderPredicates___boxed(lean_object*);
static lean_object* l_Mathlib_initFn____x40_Mathlib_Util_PPOptions___hyg_7____closed__5;
static lean_object* l_Mathlib_initFn____x40_Mathlib_Util_PPOptions___hyg_7____closed__7;
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Mathlib_getPPBinderPredicates(lean_object*);
static lean_object* l_Mathlib_initFn____x40_Mathlib_Util_PPOptions___hyg_7____closed__2;
static lean_object* l_Mathlib_initFn____x40_Mathlib_Util_PPOptions___hyg_7____closed__3;
static lean_object* l_Mathlib_initFn____x40_Mathlib_Util_PPOptions___hyg_7____closed__4;
static lean_object* l_Mathlib_initFn____x40_Mathlib_Util_PPOptions___hyg_7____closed__1;
static lean_object* l_Mathlib_initFn____x40_Mathlib_Util_PPOptions___hyg_7____closed__8;
lean_object* l_Lean_Option_register___at_Lean_Elab_initFn____x40_Lean_Elab_AutoBound___hyg_6____spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Mathlib_initFn____x40_Mathlib_Util_PPOptions___hyg_7_(lean_object*);
lean_object* l_Lean_KVMap_findCore(lean_object*, lean_object*);
uint8_t l_Lean_getPPAll(lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Mathlib_initFn____x40_Mathlib_Util_PPOptions___hyg_7____closed__6;
static lean_object* _init_l_Mathlib_initFn____x40_Mathlib_Util_PPOptions___hyg_7____closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("pp", 2, 2);
return x_1;
}
}
static lean_object* _init_l_Mathlib_initFn____x40_Mathlib_Util_PPOptions___hyg_7____closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("mathlib", 7, 7);
return x_1;
}
}
static lean_object* _init_l_Mathlib_initFn____x40_Mathlib_Util_PPOptions___hyg_7____closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("binderPredicates", 16, 16);
return x_1;
}
}
static lean_object* _init_l_Mathlib_initFn____x40_Mathlib_Util_PPOptions___hyg_7____closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Mathlib_initFn____x40_Mathlib_Util_PPOptions___hyg_7____closed__1;
x_2 = l_Mathlib_initFn____x40_Mathlib_Util_PPOptions___hyg_7____closed__2;
x_3 = l_Mathlib_initFn____x40_Mathlib_Util_PPOptions___hyg_7____closed__3;
x_4 = l_Lean_Name_mkStr3(x_1, x_2, x_3);
return x_4;
}
}
static lean_object* _init_l_Mathlib_initFn____x40_Mathlib_Util_PPOptions___hyg_7____closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("(pretty printer) pretty prints binders such as `∀ (x : α) (x < 2), p x` as `∀ x < 2, p x`", 94, 89);
return x_1;
}
}
static lean_object* _init_l_Mathlib_initFn____x40_Mathlib_Util_PPOptions___hyg_7____closed__6() {
_start:
{
uint8_t x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = 1;
x_2 = l_Mathlib_initFn____x40_Mathlib_Util_PPOptions___hyg_7____closed__1;
x_3 = l_Mathlib_initFn____x40_Mathlib_Util_PPOptions___hyg_7____closed__5;
x_4 = lean_box(x_1);
x_5 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_5, 0, x_4);
lean_ctor_set(x_5, 1, x_2);
lean_ctor_set(x_5, 2, x_3);
return x_5;
}
}
static lean_object* _init_l_Mathlib_initFn____x40_Mathlib_Util_PPOptions___hyg_7____closed__7() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Mathlib", 7, 7);
return x_1;
}
}
static lean_object* _init_l_Mathlib_initFn____x40_Mathlib_Util_PPOptions___hyg_7____closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l_Mathlib_initFn____x40_Mathlib_Util_PPOptions___hyg_7____closed__7;
x_2 = l_Mathlib_initFn____x40_Mathlib_Util_PPOptions___hyg_7____closed__1;
x_3 = l_Mathlib_initFn____x40_Mathlib_Util_PPOptions___hyg_7____closed__2;
x_4 = l_Mathlib_initFn____x40_Mathlib_Util_PPOptions___hyg_7____closed__3;
x_5 = l_Lean_Name_mkStr4(x_1, x_2, x_3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Mathlib_initFn____x40_Mathlib_Util_PPOptions___hyg_7_(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l_Mathlib_initFn____x40_Mathlib_Util_PPOptions___hyg_7____closed__4;
x_3 = l_Mathlib_initFn____x40_Mathlib_Util_PPOptions___hyg_7____closed__6;
x_4 = l_Mathlib_initFn____x40_Mathlib_Util_PPOptions___hyg_7____closed__8;
x_5 = l_Lean_Option_register___at_Lean_Elab_initFn____x40_Lean_Elab_AutoBound___hyg_6____spec__1(x_2, x_3, x_4, x_1);
return x_5;
}
}
LEAN_EXPORT uint8_t l_Mathlib_getPPBinderPredicates(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; uint8_t x_4; lean_object* x_5; 
x_2 = l_Mathlib_pp_mathlib_binderPredicates;
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
x_4 = l_Lean_getPPAll(x_1);
x_5 = l_Lean_KVMap_findCore(x_1, x_3);
lean_dec(x_3);
if (x_4 == 0)
{
if (lean_obj_tag(x_5) == 0)
{
uint8_t x_6; 
x_6 = 1;
return x_6;
}
else
{
lean_object* x_7; 
x_7 = lean_ctor_get(x_5, 0);
lean_inc(x_7);
lean_dec(x_5);
if (lean_obj_tag(x_7) == 1)
{
uint8_t x_8; 
x_8 = lean_ctor_get_uint8(x_7, 0);
lean_dec(x_7);
return x_8;
}
else
{
uint8_t x_9; 
lean_dec(x_7);
x_9 = 1;
return x_9;
}
}
}
else
{
if (lean_obj_tag(x_5) == 0)
{
uint8_t x_10; 
x_10 = 0;
return x_10;
}
else
{
lean_object* x_11; 
x_11 = lean_ctor_get(x_5, 0);
lean_inc(x_11);
lean_dec(x_5);
if (lean_obj_tag(x_11) == 1)
{
uint8_t x_12; 
x_12 = lean_ctor_get_uint8(x_11, 0);
lean_dec(x_11);
return x_12;
}
else
{
uint8_t x_13; 
lean_dec(x_11);
x_13 = 0;
return x_13;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Mathlib_getPPBinderPredicates___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l_Mathlib_getPPBinderPredicates(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Init(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Util_PPOptions(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Mathlib_initFn____x40_Mathlib_Util_PPOptions___hyg_7____closed__1 = _init_l_Mathlib_initFn____x40_Mathlib_Util_PPOptions___hyg_7____closed__1();
lean_mark_persistent(l_Mathlib_initFn____x40_Mathlib_Util_PPOptions___hyg_7____closed__1);
l_Mathlib_initFn____x40_Mathlib_Util_PPOptions___hyg_7____closed__2 = _init_l_Mathlib_initFn____x40_Mathlib_Util_PPOptions___hyg_7____closed__2();
lean_mark_persistent(l_Mathlib_initFn____x40_Mathlib_Util_PPOptions___hyg_7____closed__2);
l_Mathlib_initFn____x40_Mathlib_Util_PPOptions___hyg_7____closed__3 = _init_l_Mathlib_initFn____x40_Mathlib_Util_PPOptions___hyg_7____closed__3();
lean_mark_persistent(l_Mathlib_initFn____x40_Mathlib_Util_PPOptions___hyg_7____closed__3);
l_Mathlib_initFn____x40_Mathlib_Util_PPOptions___hyg_7____closed__4 = _init_l_Mathlib_initFn____x40_Mathlib_Util_PPOptions___hyg_7____closed__4();
lean_mark_persistent(l_Mathlib_initFn____x40_Mathlib_Util_PPOptions___hyg_7____closed__4);
l_Mathlib_initFn____x40_Mathlib_Util_PPOptions___hyg_7____closed__5 = _init_l_Mathlib_initFn____x40_Mathlib_Util_PPOptions___hyg_7____closed__5();
lean_mark_persistent(l_Mathlib_initFn____x40_Mathlib_Util_PPOptions___hyg_7____closed__5);
l_Mathlib_initFn____x40_Mathlib_Util_PPOptions___hyg_7____closed__6 = _init_l_Mathlib_initFn____x40_Mathlib_Util_PPOptions___hyg_7____closed__6();
lean_mark_persistent(l_Mathlib_initFn____x40_Mathlib_Util_PPOptions___hyg_7____closed__6);
l_Mathlib_initFn____x40_Mathlib_Util_PPOptions___hyg_7____closed__7 = _init_l_Mathlib_initFn____x40_Mathlib_Util_PPOptions___hyg_7____closed__7();
lean_mark_persistent(l_Mathlib_initFn____x40_Mathlib_Util_PPOptions___hyg_7____closed__7);
l_Mathlib_initFn____x40_Mathlib_Util_PPOptions___hyg_7____closed__8 = _init_l_Mathlib_initFn____x40_Mathlib_Util_PPOptions___hyg_7____closed__8();
lean_mark_persistent(l_Mathlib_initFn____x40_Mathlib_Util_PPOptions___hyg_7____closed__8);
res = l_Mathlib_initFn____x40_Mathlib_Util_PPOptions___hyg_7_(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
l_Mathlib_pp_mathlib_binderPredicates = lean_io_result_get_value(res);
lean_mark_persistent(l_Mathlib_pp_mathlib_binderPredicates);
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
