// Lean compiler output
// Module: Mathlib.Algebra.Ring.Idempotent
// Imports: Init Mathlib.Algebra.GroupWithZero.Idempotent Mathlib.Algebra.Ring.Defs Mathlib.Order.Notation Mathlib.Tactic.Convert
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
lean_object* l_NonAssocRing_toAddCommGroupWithOne___rarg(lean_object*);
LEAN_EXPORT lean_object* l_IsIdempotentElem_instHasComplSubtype___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IsIdempotentElem_instHasComplSubtype___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IsIdempotentElem_instHasComplSubtype(lean_object*);
lean_object* l_AddCommGroupWithOne_toAddGroupWithOne___rarg(lean_object*);
LEAN_EXPORT lean_object* l_IsIdempotentElem_instHasComplSubtype___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_3 = l_NonAssocRing_toAddCommGroupWithOne___rarg(x_1);
x_4 = l_AddCommGroupWithOne_toAddGroupWithOne___rarg(x_3);
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
x_9 = lean_apply_2(x_6, x_8, x_2);
return x_9;
}
}
LEAN_EXPORT lean_object* l_IsIdempotentElem_instHasComplSubtype(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_IsIdempotentElem_instHasComplSubtype___rarg___boxed), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_IsIdempotentElem_instHasComplSubtype___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_IsIdempotentElem_instHasComplSubtype___rarg(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_GroupWithZero_Idempotent(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Ring_Defs(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Order_Notation(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Tactic_Convert(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Algebra_Ring_Idempotent(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_GroupWithZero_Idempotent(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Ring_Defs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Order_Notation(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Tactic_Convert(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
