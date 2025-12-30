// Lean compiler output
// Module: Mathlib.Topology.Separation.Hausdorff
// Imports: Init Mathlib.Topology.Separation.Basic Mathlib.Topology.Compactness.SigmaCompact
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
LEAN_EXPORT lean_object* l_t2Quotient_lift___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_t2Quotient_mk___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_t2Quotient_lift(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_t2Setoid___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_t2Quotient_mk___rarg(lean_object*);
LEAN_EXPORT lean_object* l_t2Setoid(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_t2Quotient_instTopologicalSpace(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_t2Quotient_instTopologicalSpace___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_t2Quotient_mk___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_t2Quotient_mk(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_t2Quotient_lift___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_t2Setoid(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_box(0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_t2Setoid___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_t2Setoid(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_t2Quotient_instTopologicalSpace(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_box(0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_t2Quotient_instTopologicalSpace___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_t2Quotient_instTopologicalSpace(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_t2Quotient_mk___rarg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_t2Quotient_mk(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_t2Quotient_mk___rarg___boxed), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_t2Quotient_mk___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_t2Quotient_mk___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_t2Quotient_mk___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_t2Quotient_mk(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_t2Quotient_lift___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_apply_1(x_1, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_t2Quotient_lift(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_t2Quotient_lift___rarg), 3, 0);
return x_6;
}
}
LEAN_EXPORT lean_object* l_t2Quotient_lift___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_t2Quotient_lift(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_6;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Topology_Separation_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Topology_Compactness_SigmaCompact(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Topology_Separation_Hausdorff(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Topology_Separation_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Topology_Compactness_SigmaCompact(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
