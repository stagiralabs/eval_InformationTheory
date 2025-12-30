// Lean compiler output
// Module: Mathlib.Algebra.AddTorsor.Basic
// Imports: Init Mathlib.Algebra.AddTorsor.Defs Mathlib.Algebra.Group.Action.Basic Mathlib.Algebra.Group.End Mathlib.Algebra.Group.Pointwise.Set.Basic
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
LEAN_EXPORT lean_object* l_Pi_instAddTorsor___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Equiv_constVAdd___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Pi_instAddTorsor___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_constVAddHom___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Pi_instAddTorsor___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Prod_instAddTorsor___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Pi_instAddTorsor___rarg___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Equiv_constVAddHom___rarg___closed__1;
LEAN_EXPORT lean_object* l_Prod_instAddTorsor(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Pi_instAddTorsor(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Prod_instAddTorsor___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Prod_instAddTorsor___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_constVAddHom(lean_object*, lean_object*);
lean_object* l_Multiplicative_toAdd(lean_object*);
LEAN_EXPORT lean_object* l_Prod_instAddTorsor___rarg___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Prod_instAddTorsor___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_ctor_get(x_3, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_4, 0);
lean_inc(x_7);
x_8 = lean_apply_2(x_5, x_6, x_7);
x_9 = lean_ctor_get(x_2, 0);
lean_inc(x_9);
lean_dec(x_2);
x_10 = lean_ctor_get(x_3, 1);
lean_inc(x_10);
lean_dec(x_3);
x_11 = lean_ctor_get(x_4, 1);
lean_inc(x_11);
lean_dec(x_4);
x_12 = lean_apply_2(x_9, x_10, x_11);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_8);
lean_ctor_set(x_13, 1, x_12);
return x_13;
}
}
LEAN_EXPORT lean_object* l_Prod_instAddTorsor___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_ctor_get(x_3, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_4, 0);
lean_inc(x_7);
x_8 = lean_apply_2(x_5, x_6, x_7);
x_9 = lean_ctor_get(x_2, 1);
lean_inc(x_9);
lean_dec(x_2);
x_10 = lean_ctor_get(x_3, 1);
lean_inc(x_10);
lean_dec(x_3);
x_11 = lean_ctor_get(x_4, 1);
lean_inc(x_11);
lean_dec(x_4);
x_12 = lean_apply_2(x_9, x_10, x_11);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_8);
lean_ctor_set(x_13, 1, x_12);
return x_13;
}
}
LEAN_EXPORT lean_object* l_Prod_instAddTorsor___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
lean_inc(x_4);
lean_inc(x_3);
x_5 = lean_alloc_closure((void*)(l_Prod_instAddTorsor___rarg___lambda__1), 4, 2);
lean_closure_set(x_5, 0, x_3);
lean_closure_set(x_5, 1, x_4);
x_6 = lean_alloc_closure((void*)(l_Prod_instAddTorsor___rarg___lambda__2), 4, 2);
lean_closure_set(x_6, 0, x_3);
lean_closure_set(x_6, 1, x_4);
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_5);
lean_ctor_set(x_7, 1, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Prod_instAddTorsor(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_Prod_instAddTorsor___rarg___boxed), 4, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Prod_instAddTorsor___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Prod_instAddTorsor___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Pi_instAddTorsor___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
lean_inc(x_4);
x_5 = lean_apply_1(x_1, x_4);
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
lean_dec(x_5);
lean_inc(x_4);
x_7 = lean_apply_1(x_2, x_4);
x_8 = lean_apply_1(x_3, x_4);
x_9 = lean_apply_2(x_6, x_7, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Pi_instAddTorsor___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
lean_inc(x_4);
x_5 = lean_apply_1(x_1, x_4);
x_6 = lean_ctor_get(x_5, 1);
lean_inc(x_6);
lean_dec(x_5);
lean_inc(x_4);
x_7 = lean_apply_1(x_2, x_4);
x_8 = lean_apply_1(x_3, x_4);
x_9 = lean_apply_2(x_6, x_7, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Pi_instAddTorsor___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
lean_inc(x_3);
x_4 = lean_alloc_closure((void*)(l_Pi_instAddTorsor___rarg___lambda__1), 4, 1);
lean_closure_set(x_4, 0, x_3);
x_5 = lean_alloc_closure((void*)(l_Pi_instAddTorsor___rarg___lambda__2), 4, 1);
lean_closure_set(x_5, 0, x_3);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_4);
lean_ctor_set(x_6, 1, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Pi_instAddTorsor(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Pi_instAddTorsor___rarg___boxed), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Pi_instAddTorsor___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Pi_instAddTorsor___rarg(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
static lean_object* _init_l_Equiv_constVAddHom___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = l_Multiplicative_toAdd(lean_box(0));
return x_1;
}
}
LEAN_EXPORT lean_object* l_Equiv_constVAddHom___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_4 = l_Equiv_constVAddHom___rarg___closed__1;
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
x_6 = lean_apply_1(x_5, x_3);
x_7 = l_Equiv_constVAdd___rarg(x_1, x_2, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Equiv_constVAddHom(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Equiv_constVAddHom___rarg), 3, 0);
return x_3;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_AddTorsor_Defs(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Group_Action_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Group_End(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Group_Pointwise_Set_Basic(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Algebra_AddTorsor_Basic(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_AddTorsor_Defs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Group_Action_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Group_End(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Group_Pointwise_Set_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Equiv_constVAddHom___rarg___closed__1 = _init_l_Equiv_constVAddHom___rarg___closed__1();
lean_mark_persistent(l_Equiv_constVAddHom___rarg___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
