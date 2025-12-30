// Lean compiler output
// Module: Mathlib.Analysis.Convex.Basic
// Imports: Init Mathlib.Algebra.Order.BigOperators.Ring.Finset Mathlib.Algebra.Order.Module.OrderedSMul Mathlib.Algebra.Order.Module.Synonym Mathlib.Analysis.Convex.Star Mathlib.Tactic.FieldSimp Mathlib.Tactic.NoncommRing Mathlib.LinearAlgebra.AffineSpace.AffineSubspace.Defs
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
lean_object* l_AddGroupWithOne_toAddGroup___rarg(lean_object*);
lean_object* l_Ring_toAddGroupWithOne___rarg(lean_object*);
LEAN_EXPORT lean_object* l_convexAddSubmonoid___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_convexAddSubmonoid(lean_object*, lean_object*, lean_object*);
lean_object* l_Matrix_vecEmpty___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_stdSimplexEquivIcc___elambda__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_stdSimplexEquivIcc___rarg(lean_object*);
LEAN_EXPORT lean_object* l_stdSimplexEquivIcc___elambda__1(lean_object*);
static lean_object* l_stdSimplexEquivIcc___elambda__1___rarg___closed__1;
LEAN_EXPORT lean_object* l_stdSimplexEquivIcc(lean_object*);
LEAN_EXPORT lean_object* l_convexAddSubmonoid___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_stdSimplexEquivIcc___elambda__2___rarg(lean_object*);
LEAN_EXPORT lean_object* l_convexAddSubmonoid___rarg(lean_object*, lean_object*);
lean_object* l_Matrix_vecCons___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_stdSimplexEquivIcc___elambda__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_stdSimplexEquivIcc___elambda__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_convexAddSubmonoid___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_3, 0, lean_box(0));
return x_3;
}
}
LEAN_EXPORT lean_object* l_convexAddSubmonoid(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_convexAddSubmonoid___rarg___boxed), 2, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_convexAddSubmonoid___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_convexAddSubmonoid___rarg(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_convexAddSubmonoid___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_convexAddSubmonoid(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
static lean_object* _init_l_stdSimplexEquivIcc___elambda__1___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Matrix_vecEmpty___boxed), 2, 1);
lean_closure_set(x_1, 0, lean_box(0));
return x_1;
}
}
LEAN_EXPORT lean_object* l_stdSimplexEquivIcc___elambda__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
lean_dec(x_1);
x_4 = l_Ring_toAddGroupWithOne___rarg(x_3);
x_5 = l_AddGroupWithOne_toAddGroup___rarg(x_4);
x_6 = lean_ctor_get(x_5, 2);
lean_inc(x_6);
lean_dec(x_5);
x_7 = lean_ctor_get(x_4, 1);
lean_inc(x_7);
lean_dec(x_4);
x_8 = lean_ctor_get(x_7, 2);
lean_inc(x_8);
lean_dec(x_7);
lean_inc(x_2);
x_9 = lean_apply_2(x_6, x_8, x_2);
x_10 = lean_unsigned_to_nat(0u);
x_11 = l_stdSimplexEquivIcc___elambda__1___rarg___closed__1;
x_12 = lean_alloc_closure((void*)(l_Matrix_vecCons___rarg___boxed), 4, 3);
lean_closure_set(x_12, 0, x_10);
lean_closure_set(x_12, 1, x_9);
lean_closure_set(x_12, 2, x_11);
x_13 = lean_unsigned_to_nat(1u);
x_14 = lean_alloc_closure((void*)(l_Matrix_vecCons___rarg___boxed), 4, 3);
lean_closure_set(x_14, 0, x_13);
lean_closure_set(x_14, 1, x_2);
lean_closure_set(x_14, 2, x_12);
return x_14;
}
}
LEAN_EXPORT lean_object* l_stdSimplexEquivIcc___elambda__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_stdSimplexEquivIcc___elambda__1___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_stdSimplexEquivIcc___elambda__2___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_unsigned_to_nat(0u);
x_3 = lean_apply_1(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_stdSimplexEquivIcc___elambda__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_stdSimplexEquivIcc___elambda__2___rarg), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_stdSimplexEquivIcc___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = lean_alloc_closure((void*)(l_stdSimplexEquivIcc___elambda__1___rarg), 2, 1);
lean_closure_set(x_2, 0, x_1);
x_3 = lean_alloc_closure((void*)(l_stdSimplexEquivIcc___elambda__2___rarg), 1, 0);
x_4 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_4, 0, x_3);
lean_ctor_set(x_4, 1, x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_stdSimplexEquivIcc(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_stdSimplexEquivIcc___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_stdSimplexEquivIcc___elambda__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_stdSimplexEquivIcc___elambda__2(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Order_BigOperators_Ring_Finset(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Order_Module_OrderedSMul(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Order_Module_Synonym(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Analysis_Convex_Star(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Tactic_FieldSimp(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Tactic_NoncommRing(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_LinearAlgebra_AffineSpace_AffineSubspace_Defs(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Analysis_Convex_Basic(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Order_BigOperators_Ring_Finset(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Order_Module_OrderedSMul(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Order_Module_Synonym(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Analysis_Convex_Star(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Tactic_FieldSimp(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Tactic_NoncommRing(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_LinearAlgebra_AffineSpace_AffineSubspace_Defs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_stdSimplexEquivIcc___elambda__1___rarg___closed__1 = _init_l_stdSimplexEquivIcc___elambda__1___rarg___closed__1();
lean_mark_persistent(l_stdSimplexEquivIcc___elambda__1___rarg___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
