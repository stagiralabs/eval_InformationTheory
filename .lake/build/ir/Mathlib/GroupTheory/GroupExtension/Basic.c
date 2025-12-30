// Lean compiler output
// Module: Mathlib.GroupTheory.GroupExtension.Basic
// Imports: Init Mathlib.GroupTheory.GroupExtension.Defs Mathlib.GroupTheory.SemidirectProduct Mathlib.GroupTheory.QuotientGroup.Basic Mathlib.Tactic.Group
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
LEAN_EXPORT lean_object* l_AddGroupExtension_IsConj_setoid___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_AddGroupExtension_Section_instFunLike___elambda__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_GroupExtension_Section_equivComp___elambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddGroupExtension_IsConj_setoid(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_GroupExtension_Section_equivComp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_GroupExtension_IsConj_setoid(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_GroupExtension_Section_equivComp___rarg___lambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_GroupExtension_IsConj_setoid___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_GroupExtension_Section_equivComp___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddGroupExtension_Section_equivComp___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_GroupExtension_Section_equivComp___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddGroupExtension_Section_equivComp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_AddGroupExtension_Equiv_instEquivLike___elambda__2___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddGroupExtension_Section_equivComp___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddGroupExtension_Section_equivComp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddGroupExtension_Section_equivComp___elambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_GroupExtension_Section_equivComp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_GroupExtension_Section_equivComp___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_apply_1(x_2, x_3);
x_5 = lean_apply_1(x_1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_GroupExtension_Section_equivComp___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_GroupExtension_Section_equivComp___elambda__1___rarg), 3, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_GroupExtension_Section_equivComp___rarg___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
lean_dec(x_1);
x_4 = lean_apply_1(x_3, x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_GroupExtension_Section_equivComp___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_alloc_closure((void*)(l_GroupExtension_Section_equivComp___rarg___lambda__1), 2, 1);
lean_closure_set(x_3, 0, x_2);
x_4 = lean_alloc_closure((void*)(l_GroupExtension_Section_equivComp___elambda__1___rarg), 3, 2);
lean_closure_set(x_4, 0, x_3);
lean_closure_set(x_4, 1, x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_GroupExtension_Section_equivComp(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = lean_alloc_closure((void*)(l_GroupExtension_Section_equivComp___rarg), 2, 0);
return x_11;
}
}
LEAN_EXPORT lean_object* l_GroupExtension_Section_equivComp___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_GroupExtension_Section_equivComp(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
return x_11;
}
}
LEAN_EXPORT lean_object* l_AddGroupExtension_Section_equivComp___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_apply_1(x_2, x_3);
x_5 = lean_apply_1(x_1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_AddGroupExtension_Section_equivComp___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_AddGroupExtension_Section_equivComp___elambda__1___rarg), 3, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_AddGroupExtension_Section_equivComp___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_alloc_closure((void*)(l_AddGroupExtension_Equiv_instEquivLike___elambda__2___rarg), 2, 1);
lean_closure_set(x_3, 0, x_2);
x_4 = lean_alloc_closure((void*)(l_AddGroupExtension_Section_instFunLike___elambda__1___rarg), 2, 1);
lean_closure_set(x_4, 0, x_1);
x_5 = lean_alloc_closure((void*)(l_AddGroupExtension_Section_equivComp___elambda__1___rarg), 3, 2);
lean_closure_set(x_5, 0, x_3);
lean_closure_set(x_5, 1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_AddGroupExtension_Section_equivComp(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = lean_alloc_closure((void*)(l_AddGroupExtension_Section_equivComp___rarg), 2, 0);
return x_11;
}
}
LEAN_EXPORT lean_object* l_AddGroupExtension_Section_equivComp___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_AddGroupExtension_Section_equivComp(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
return x_11;
}
}
LEAN_EXPORT lean_object* l_GroupExtension_IsConj_setoid(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = lean_box(0);
return x_8;
}
}
LEAN_EXPORT lean_object* l_GroupExtension_IsConj_setoid___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_GroupExtension_IsConj_setoid(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
return x_8;
}
}
LEAN_EXPORT lean_object* l_AddGroupExtension_IsConj_setoid(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = lean_box(0);
return x_8;
}
}
LEAN_EXPORT lean_object* l_AddGroupExtension_IsConj_setoid___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_AddGroupExtension_IsConj_setoid(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
return x_8;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_GroupTheory_GroupExtension_Defs(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_GroupTheory_SemidirectProduct(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_GroupTheory_QuotientGroup_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Tactic_Group(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_GroupTheory_GroupExtension_Basic(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_GroupTheory_GroupExtension_Defs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_GroupTheory_SemidirectProduct(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_GroupTheory_QuotientGroup_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Tactic_Group(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
