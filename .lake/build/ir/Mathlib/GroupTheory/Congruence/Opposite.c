// Lean compiler output
// Module: Mathlib.GroupTheory.Congruence.Opposite
// Imports: Init Mathlib.Algebra.Opposites Mathlib.GroupTheory.Congruence.Defs
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
LEAN_EXPORT lean_object* l_Con_orderIsoOp(lean_object*);
LEAN_EXPORT lean_object* l_Con_orderIsoOp___rarg(lean_object*);
LEAN_EXPORT lean_object* l_AddCon_orderIsoOp(lean_object*);
LEAN_EXPORT lean_object* l_AddCon_op___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Con_unop___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddCon_unop(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Con_op(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddCon_op(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddCon_unop___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddCon_orderIsoOp___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Con_unop(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Con_op___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Con_op(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_box(0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Con_op___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Con_op(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_AddCon_op(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_box(0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_AddCon_op___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_AddCon_op(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Con_unop(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_box(0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Con_unop___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Con_unop(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_AddCon_unop(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_box(0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_AddCon_unop___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_AddCon_unop(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Con_orderIsoOp___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
lean_inc(x_1);
x_2 = lean_alloc_closure((void*)(l_Con_op___boxed), 3, 2);
lean_closure_set(x_2, 0, lean_box(0));
lean_closure_set(x_2, 1, x_1);
x_3 = lean_alloc_closure((void*)(l_Con_unop___boxed), 3, 2);
lean_closure_set(x_3, 0, lean_box(0));
lean_closure_set(x_3, 1, x_1);
x_4 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_4, 0, x_2);
lean_ctor_set(x_4, 1, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Con_orderIsoOp(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Con_orderIsoOp___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AddCon_orderIsoOp___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
lean_inc(x_1);
x_2 = lean_alloc_closure((void*)(l_AddCon_op___boxed), 3, 2);
lean_closure_set(x_2, 0, lean_box(0));
lean_closure_set(x_2, 1, x_1);
x_3 = lean_alloc_closure((void*)(l_AddCon_unop___boxed), 3, 2);
lean_closure_set(x_3, 0, lean_box(0));
lean_closure_set(x_3, 1, x_1);
x_4 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_4, 0, x_2);
lean_ctor_set(x_4, 1, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_AddCon_orderIsoOp(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_AddCon_orderIsoOp___rarg), 1, 0);
return x_2;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Opposites(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_GroupTheory_Congruence_Defs(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_GroupTheory_Congruence_Opposite(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Opposites(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_GroupTheory_Congruence_Defs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
