// Lean compiler output
// Module: Mathlib.Combinatorics.Quiver.Subquiver
// Imports: Init Mathlib.Order.Notation Mathlib.Combinatorics.Quiver.Basic
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
LEAN_EXPORT lean_object* l_WideSubquiver_quiver(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Quiver_instInhabitedLabelling___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Quiver_instBotWideSubquiver(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Quiver_instTopWideSubquiver___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_wideSubquiverHasCoeToSort(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_wideSubquiverHasCoeToSort___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Quiver_instInhabitedLabelling(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Quiver_instTopWideSubquiver(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Quiver_instBotWideSubquiver___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Quiver_instInhabitedLabelling___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WideSubquiver_quiver___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Quiver_instInhabitedLabelling___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Quiver_wideSubquiverEquivSetTotal(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Quiver_wideSubquiverEquivSetTotal___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_wideSubquiverHasCoeToSort(lean_object* x_1, lean_object* x_2) {
_start:
{
return lean_box(0);
}
}
LEAN_EXPORT lean_object* l_wideSubquiverHasCoeToSort___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_wideSubquiverHasCoeToSort(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_WideSubquiver_quiver(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_box(0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_WideSubquiver_quiver___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_WideSubquiver_quiver(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Quiver_instBotWideSubquiver(lean_object* x_1, lean_object* x_2) {
_start:
{
return lean_box(0);
}
}
LEAN_EXPORT lean_object* l_Quiver_instBotWideSubquiver___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Quiver_instBotWideSubquiver(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Quiver_instTopWideSubquiver(lean_object* x_1, lean_object* x_2) {
_start:
{
return lean_box(0);
}
}
LEAN_EXPORT lean_object* l_Quiver_instTopWideSubquiver___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Quiver_instTopWideSubquiver(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Quiver_wideSubquiverEquivSetTotal(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, lean_box(0));
lean_ctor_set(x_3, 1, lean_box(0));
return x_3;
}
}
LEAN_EXPORT lean_object* l_Quiver_wideSubquiverEquivSetTotal___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Quiver_wideSubquiverEquivSetTotal(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Quiver_instInhabitedLabelling___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Quiver_instInhabitedLabelling(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Quiver_instInhabitedLabelling___rarg___boxed), 4, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Quiver_instInhabitedLabelling___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Quiver_instInhabitedLabelling___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Quiver_instInhabitedLabelling___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Quiver_instInhabitedLabelling(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Order_Notation(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Combinatorics_Quiver_Basic(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Combinatorics_Quiver_Subquiver(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Order_Notation(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Combinatorics_Quiver_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
