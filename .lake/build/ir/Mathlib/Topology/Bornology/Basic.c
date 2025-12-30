// Lean compiler output
// Module: Mathlib.Topology.Bornology.Basic
// Imports: Init Mathlib.Order.Filter.Cofinite
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
LEAN_EXPORT lean_object* l_OrderDual_instBornology(lean_object*);
LEAN_EXPORT lean_object* l_Bornology_cofinite(lean_object*);
LEAN_EXPORT lean_object* l_Bornology_cobounded___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Bornology_cobounded___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_OrderDual_instBornology___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Bornology_Simps_cobounded___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Bornology_Simps_cobounded(lean_object*);
LEAN_EXPORT lean_object* l_Bornology_cobounded(lean_object*);
LEAN_EXPORT lean_object* l_instBornologyPUnit;
LEAN_EXPORT lean_object* l_Bornology_ofBounded(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Bornology_Simps_cobounded___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_OrderDual_instBornology___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Bornology_ofBounded_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Bornology_cobounded___rarg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Bornology_cobounded(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Bornology_cobounded___rarg___boxed), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Bornology_cobounded___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Bornology_cobounded___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Bornology_Simps_cobounded___rarg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Bornology_Simps_cobounded(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Bornology_Simps_cobounded___rarg___boxed), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Bornology_Simps_cobounded___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Bornology_Simps_cobounded___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Bornology_ofBounded(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_7, 0, lean_box(0));
return x_7;
}
}
LEAN_EXPORT lean_object* l_Bornology_ofBounded_x27(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_7, 0, lean_box(0));
return x_7;
}
}
static lean_object* _init_l_instBornologyPUnit() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_1, 0, lean_box(0));
return x_1;
}
}
LEAN_EXPORT lean_object* l_Bornology_cofinite(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, lean_box(0));
return x_2;
}
}
LEAN_EXPORT lean_object* l_OrderDual_instBornology___rarg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_OrderDual_instBornology(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_OrderDual_instBornology___rarg___boxed), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_OrderDual_instBornology___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_OrderDual_instBornology___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Order_Filter_Cofinite(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Topology_Bornology_Basic(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Order_Filter_Cofinite(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_instBornologyPUnit = _init_l_instBornologyPUnit();
lean_mark_persistent(l_instBornologyPUnit);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
