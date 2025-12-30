// Lean compiler output
// Module: Mathlib.Data.Nat.Basic
// Imports: Init Mathlib.Data.Nat.Init Mathlib.Logic.Nontrivial.Defs Mathlib.Tactic.Contrapose Mathlib.Tactic.GCongr.CoreAttrs Mathlib.Util.AssertExists
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
static lean_object* l_Nat_instLinearOrder___closed__6;
LEAN_EXPORT lean_object* l_Nat_instOrd__mathlib;
static lean_object* l_Nat_instLinearOrder___closed__8;
lean_object* l_Nat_decLt___boxed(lean_object*, lean_object*);
static lean_object* l_Nat_instLinearOrder___closed__3;
static lean_object* l_Nat_instLinearOrder___closed__5;
static lean_object* l_Nat_instLinearOrder___closed__1;
LEAN_EXPORT lean_object* l_Nat_instMax__mathlib;
lean_object* l_Nat_instMax___boxed(lean_object*, lean_object*);
static lean_object* l_Nat_instLinearOrder___closed__7;
lean_object* l_instOrdNat___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_instPreorder;
LEAN_EXPORT lean_object* l_Nat_instPartialOrder;
lean_object* l_Nat_decLe___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_instMin__mathlib;
lean_object* l_instMinNat___boxed(lean_object*, lean_object*);
static lean_object* l_Nat_instLinearOrder___closed__4;
lean_object* l_instDecidableEqNat___boxed(lean_object*, lean_object*);
static lean_object* l_Nat_instLinearOrder___closed__2;
LEAN_EXPORT lean_object* l_Nat_instLinearOrder;
static lean_object* _init_l_Nat_instLinearOrder___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = lean_box(0);
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Nat_instLinearOrder___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_instMinNat___boxed), 2, 0);
return x_1;
}
}
static lean_object* _init_l_Nat_instLinearOrder___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Nat_instMax___boxed), 2, 0);
return x_1;
}
}
static lean_object* _init_l_Nat_instLinearOrder___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_instOrdNat___boxed), 2, 0);
return x_1;
}
}
static lean_object* _init_l_Nat_instLinearOrder___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Nat_decLe___boxed), 2, 0);
return x_1;
}
}
static lean_object* _init_l_Nat_instLinearOrder___closed__6() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_instDecidableEqNat___boxed), 2, 0);
return x_1;
}
}
static lean_object* _init_l_Nat_instLinearOrder___closed__7() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Nat_decLt___boxed), 2, 0);
return x_1;
}
}
static lean_object* _init_l_Nat_instLinearOrder___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_1 = l_Nat_instLinearOrder___closed__1;
x_2 = l_Nat_instLinearOrder___closed__2;
x_3 = l_Nat_instLinearOrder___closed__3;
x_4 = l_Nat_instLinearOrder___closed__4;
x_5 = l_Nat_instLinearOrder___closed__5;
x_6 = l_Nat_instLinearOrder___closed__6;
x_7 = l_Nat_instLinearOrder___closed__7;
x_8 = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(x_8, 0, x_1);
lean_ctor_set(x_8, 1, x_2);
lean_ctor_set(x_8, 2, x_3);
lean_ctor_set(x_8, 3, x_4);
lean_ctor_set(x_8, 4, x_5);
lean_ctor_set(x_8, 5, x_6);
lean_ctor_set(x_8, 6, x_7);
return x_8;
}
}
static lean_object* _init_l_Nat_instLinearOrder() {
_start:
{
lean_object* x_1; 
x_1 = l_Nat_instLinearOrder___closed__8;
return x_1;
}
}
static lean_object* _init_l_Nat_instPreorder() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Nat_instLinearOrder;
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
return x_2;
}
}
static lean_object* _init_l_Nat_instPartialOrder() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Nat_instLinearOrder;
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
return x_2;
}
}
static lean_object* _init_l_Nat_instMin__mathlib() {
_start:
{
lean_object* x_1; 
x_1 = l_Nat_instLinearOrder___closed__2;
return x_1;
}
}
static lean_object* _init_l_Nat_instMax__mathlib() {
_start:
{
lean_object* x_1; 
x_1 = l_Nat_instLinearOrder___closed__3;
return x_1;
}
}
static lean_object* _init_l_Nat_instOrd__mathlib() {
_start:
{
lean_object* x_1; 
x_1 = l_Nat_instLinearOrder___closed__4;
return x_1;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Nat_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Logic_Nontrivial_Defs(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Tactic_Contrapose(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Tactic_GCongr_CoreAttrs(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Util_AssertExists(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Data_Nat_Basic(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Nat_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Logic_Nontrivial_Defs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Tactic_Contrapose(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Tactic_GCongr_CoreAttrs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Util_AssertExists(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Nat_instLinearOrder___closed__1 = _init_l_Nat_instLinearOrder___closed__1();
lean_mark_persistent(l_Nat_instLinearOrder___closed__1);
l_Nat_instLinearOrder___closed__2 = _init_l_Nat_instLinearOrder___closed__2();
lean_mark_persistent(l_Nat_instLinearOrder___closed__2);
l_Nat_instLinearOrder___closed__3 = _init_l_Nat_instLinearOrder___closed__3();
lean_mark_persistent(l_Nat_instLinearOrder___closed__3);
l_Nat_instLinearOrder___closed__4 = _init_l_Nat_instLinearOrder___closed__4();
lean_mark_persistent(l_Nat_instLinearOrder___closed__4);
l_Nat_instLinearOrder___closed__5 = _init_l_Nat_instLinearOrder___closed__5();
lean_mark_persistent(l_Nat_instLinearOrder___closed__5);
l_Nat_instLinearOrder___closed__6 = _init_l_Nat_instLinearOrder___closed__6();
lean_mark_persistent(l_Nat_instLinearOrder___closed__6);
l_Nat_instLinearOrder___closed__7 = _init_l_Nat_instLinearOrder___closed__7();
lean_mark_persistent(l_Nat_instLinearOrder___closed__7);
l_Nat_instLinearOrder___closed__8 = _init_l_Nat_instLinearOrder___closed__8();
lean_mark_persistent(l_Nat_instLinearOrder___closed__8);
l_Nat_instLinearOrder = _init_l_Nat_instLinearOrder();
lean_mark_persistent(l_Nat_instLinearOrder);
l_Nat_instPreorder = _init_l_Nat_instPreorder();
lean_mark_persistent(l_Nat_instPreorder);
l_Nat_instPartialOrder = _init_l_Nat_instPartialOrder();
lean_mark_persistent(l_Nat_instPartialOrder);
l_Nat_instMin__mathlib = _init_l_Nat_instMin__mathlib();
lean_mark_persistent(l_Nat_instMin__mathlib);
l_Nat_instMax__mathlib = _init_l_Nat_instMax__mathlib();
lean_mark_persistent(l_Nat_instMax__mathlib);
l_Nat_instOrd__mathlib = _init_l_Nat_instOrd__mathlib();
lean_mark_persistent(l_Nat_instOrd__mathlib);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
