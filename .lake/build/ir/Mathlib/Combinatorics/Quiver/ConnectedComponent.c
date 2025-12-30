// Lean compiler output
// Module: Mathlib.Combinatorics.Quiver.ConnectedComponent
// Imports: Init Mathlib.Combinatorics.Quiver.Subquiver Mathlib.Combinatorics.Quiver.Path Mathlib.Combinatorics.Quiver.Symmetric
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
LEAN_EXPORT lean_object* l_Quiver_WeaklyConnectedComponent_mk___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Quiver_WeaklyConnectedComponent_instInhabited___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Quiver_zigzagSetoid___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Quiver_WeaklyConnectedComponent_instCoeTC(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Quiver_WeaklyConnectedComponent_instInhabited___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Quiver_WeaklyConnectedComponent_instInhabited___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Quiver_WeaklyConnectedComponent_instCoeTC___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Quiver_WeaklyConnectedComponent_mk___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Quiver_zigzagSetoid(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Quiver_WeaklyConnectedComponent_mk___rarg___boxed(lean_object*);
static lean_object* l_Quiver_WeaklyConnectedComponent_instCoeTC___closed__1;
LEAN_EXPORT lean_object* l_Quiver_WeaklyConnectedComponent_mk(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Quiver_WeaklyConnectedComponent_instInhabited(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Quiver_zigzagSetoid(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_box(0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Quiver_zigzagSetoid___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Quiver_zigzagSetoid(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Quiver_WeaklyConnectedComponent_mk___rarg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Quiver_WeaklyConnectedComponent_mk(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Quiver_WeaklyConnectedComponent_mk___rarg___boxed), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Quiver_WeaklyConnectedComponent_mk___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Quiver_WeaklyConnectedComponent_mk___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Quiver_WeaklyConnectedComponent_mk___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Quiver_WeaklyConnectedComponent_mk(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
static lean_object* _init_l_Quiver_WeaklyConnectedComponent_instCoeTC___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Quiver_WeaklyConnectedComponent_mk___rarg___boxed), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Quiver_WeaklyConnectedComponent_instCoeTC(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Quiver_WeaklyConnectedComponent_instCoeTC___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_Quiver_WeaklyConnectedComponent_instCoeTC___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Quiver_WeaklyConnectedComponent_instCoeTC(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Quiver_WeaklyConnectedComponent_instInhabited___rarg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Quiver_WeaklyConnectedComponent_instInhabited(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Quiver_WeaklyConnectedComponent_instInhabited___rarg___boxed), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Quiver_WeaklyConnectedComponent_instInhabited___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Quiver_WeaklyConnectedComponent_instInhabited___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Quiver_WeaklyConnectedComponent_instInhabited___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Quiver_WeaklyConnectedComponent_instInhabited(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Combinatorics_Quiver_Subquiver(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Combinatorics_Quiver_Path(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Combinatorics_Quiver_Symmetric(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Combinatorics_Quiver_ConnectedComponent(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Combinatorics_Quiver_Subquiver(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Combinatorics_Quiver_Path(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Combinatorics_Quiver_Symmetric(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Quiver_WeaklyConnectedComponent_instCoeTC___closed__1 = _init_l_Quiver_WeaklyConnectedComponent_instCoeTC___closed__1();
lean_mark_persistent(l_Quiver_WeaklyConnectedComponent_instCoeTC___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
