// Lean compiler output
// Module: Mathlib.Order.Filter.Finite
// Imports: Init Mathlib.Data.Set.Finite.Lattice Mathlib.Order.Filter.Basic
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
lean_object* l_Filter_instCompleteLatticeFilter(lean_object*);
LEAN_EXPORT lean_object* l_Filter_instCoframe___lambda__2___boxed(lean_object*);
static lean_object* l_Filter_instCoframe___closed__2;
static lean_object* l_Filter_instCoframe___closed__3;
static lean_object* l_Filter_coframeMinimalAxioms___closed__1;
LEAN_EXPORT lean_object* l_Filter_instCoframe___lambda__2(lean_object*);
LEAN_EXPORT lean_object* l_Filter_instCoframe___lambda__1___boxed(lean_object*, lean_object*);
static lean_object* l_Filter_instCoframe___closed__1;
LEAN_EXPORT lean_object* l_Filter_coframeMinimalAxioms(lean_object*);
LEAN_EXPORT lean_object* l_Filter_instCoframe(lean_object*);
LEAN_EXPORT lean_object* l_Filter_instCoframe___lambda__1(lean_object*, lean_object*);
static lean_object* _init_l_Filter_coframeMinimalAxioms___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = l_Filter_instCompleteLatticeFilter(lean_box(0));
return x_1;
}
}
LEAN_EXPORT lean_object* l_Filter_coframeMinimalAxioms(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Filter_coframeMinimalAxioms___closed__1;
return x_2;
}
}
LEAN_EXPORT lean_object* l_Filter_instCoframe___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_3, 0, lean_box(0));
return x_3;
}
}
LEAN_EXPORT lean_object* l_Filter_instCoframe___lambda__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, lean_box(0));
return x_2;
}
}
static lean_object* _init_l_Filter_instCoframe___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Filter_instCoframe___lambda__1___boxed), 2, 0);
return x_1;
}
}
static lean_object* _init_l_Filter_instCoframe___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Filter_instCoframe___lambda__2___boxed), 1, 0);
return x_1;
}
}
static lean_object* _init_l_Filter_instCoframe___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Filter_coframeMinimalAxioms___closed__1;
x_2 = l_Filter_instCoframe___closed__1;
x_3 = l_Filter_instCoframe___closed__2;
x_4 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Filter_instCoframe(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Filter_instCoframe___closed__3;
return x_2;
}
}
LEAN_EXPORT lean_object* l_Filter_instCoframe___lambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Filter_instCoframe___lambda__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Filter_instCoframe___lambda__2___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Filter_instCoframe___lambda__2(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Set_Finite_Lattice(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Order_Filter_Basic(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Order_Filter_Finite(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Set_Finite_Lattice(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Order_Filter_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Filter_coframeMinimalAxioms___closed__1 = _init_l_Filter_coframeMinimalAxioms___closed__1();
lean_mark_persistent(l_Filter_coframeMinimalAxioms___closed__1);
l_Filter_instCoframe___closed__1 = _init_l_Filter_instCoframe___closed__1();
lean_mark_persistent(l_Filter_instCoframe___closed__1);
l_Filter_instCoframe___closed__2 = _init_l_Filter_instCoframe___closed__2();
lean_mark_persistent(l_Filter_instCoframe___closed__2);
l_Filter_instCoframe___closed__3 = _init_l_Filter_instCoframe___closed__3();
lean_mark_persistent(l_Filter_instCoframe___closed__3);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
