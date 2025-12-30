// Lean compiler output
// Module: Mathlib.Order.Filter.AtTopBot.Defs
// Imports: Init Mathlib.Order.Filter.Basic
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
LEAN_EXPORT lean_object* l_Filter_atTop___lambda__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_iInf___at_Filter_atTop___spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_iInf___at_Filter_atBot___spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Filter_atTop(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Filter_atTop___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_iInf___at_Filter_atTop___spec__1(lean_object*, lean_object*);
static lean_object* l_Filter_atTop___closed__1;
LEAN_EXPORT lean_object* l_Filter_atBot(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Filter_atTop___lambda__1(lean_object*);
LEAN_EXPORT lean_object* l_iInf___at_Filter_atBot___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Filter_atBot___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_iInf___at_Filter_atTop___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_3, 0, lean_box(0));
return x_3;
}
}
LEAN_EXPORT lean_object* l_Filter_atTop___lambda__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, lean_box(0));
return x_2;
}
}
static lean_object* _init_l_Filter_atTop___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Filter_atTop___lambda__1___boxed), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Filter_atTop(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_3, 0, lean_box(0));
return x_3;
}
}
LEAN_EXPORT lean_object* l_iInf___at_Filter_atTop___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_iInf___at_Filter_atTop___spec__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Filter_atTop___lambda__1___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Filter_atTop___lambda__1(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Filter_atTop___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Filter_atTop(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_iInf___at_Filter_atBot___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_3, 0, lean_box(0));
return x_3;
}
}
LEAN_EXPORT lean_object* l_Filter_atBot(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_3, 0, lean_box(0));
return x_3;
}
}
LEAN_EXPORT lean_object* l_iInf___at_Filter_atBot___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_iInf___at_Filter_atBot___spec__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Filter_atBot___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Filter_atBot(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Order_Filter_Basic(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Order_Filter_AtTopBot_Defs(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Order_Filter_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Filter_atTop___closed__1 = _init_l_Filter_atTop___closed__1();
lean_mark_persistent(l_Filter_atTop___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
