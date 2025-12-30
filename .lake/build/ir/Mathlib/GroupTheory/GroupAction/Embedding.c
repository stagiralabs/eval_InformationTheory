// Lean compiler output
// Module: Mathlib.GroupTheory.GroupAction.Embedding
// Imports: Init Mathlib.Algebra.Group.Action.Basic Mathlib.Algebra.Group.Action.Pi Mathlib.Algebra.Group.Opposite Mathlib.Tactic.MinImports
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
LEAN_EXPORT lean_object* l_Function_Embedding_vadd(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Function_Embedding_instMulAction___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Function_Embedding_vadd___elambda__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Function_Embedding_smul(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Function_Embedding_smul___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_AddAction_toPerm___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_MulAction_toPerm___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Function_Embedding_vadd___elambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Function_Embedding_instMulAction(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Function_Embedding_vadd___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Function_Embedding_instAddAction___rarg(lean_object*, lean_object*);
lean_object* l_instHVAdd___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Equiv_toEmbedding___elambda__1___rarg(lean_object*, lean_object*);
lean_object* l_Function_Embedding_trans___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Function_Embedding_instAddAction(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Function_Embedding_smul___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = l_MulAction_toPerm___rarg(x_1, x_2, x_3);
x_6 = lean_alloc_closure((void*)(l_Equiv_toEmbedding___elambda__1___rarg), 2, 1);
lean_closure_set(x_6, 0, x_5);
x_7 = lean_alloc_closure((void*)(l_Function_Embedding_trans___elambda__1___rarg), 3, 2);
lean_closure_set(x_7, 0, x_6);
lean_closure_set(x_7, 1, x_4);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Function_Embedding_smul(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Function_Embedding_smul___rarg), 4, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Function_Embedding_vadd___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = l_AddAction_toPerm___rarg(x_1, x_2, x_3);
x_6 = lean_alloc_closure((void*)(l_Equiv_toEmbedding___elambda__1___rarg), 2, 1);
lean_closure_set(x_6, 0, x_5);
x_7 = lean_alloc_closure((void*)(l_Function_Embedding_trans___elambda__1___rarg), 3, 2);
lean_closure_set(x_7, 0, x_6);
lean_closure_set(x_7, 1, x_4);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Function_Embedding_vadd___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Function_Embedding_vadd___elambda__1___rarg), 4, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Function_Embedding_vadd___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Function_Embedding_vadd___elambda__1___rarg), 4, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Function_Embedding_vadd(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Function_Embedding_vadd___rarg), 2, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Function_Embedding_instMulAction___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = l_MulAction_toPerm___rarg(x_1, x_2, x_3);
x_6 = lean_alloc_closure((void*)(l_Equiv_toEmbedding___elambda__1___rarg), 2, 1);
lean_closure_set(x_6, 0, x_5);
x_7 = lean_alloc_closure((void*)(l_Function_Embedding_trans___elambda__1___rarg), 3, 2);
lean_closure_set(x_7, 0, x_6);
lean_closure_set(x_7, 1, x_4);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Function_Embedding_instMulAction(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Function_Embedding_instMulAction___rarg), 4, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Function_Embedding_instAddAction___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_alloc_closure((void*)(l_Function_Embedding_vadd___elambda__1___rarg), 4, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
x_4 = lean_alloc_closure((void*)(l_instHVAdd___elambda__1___rarg), 3, 1);
lean_closure_set(x_4, 0, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Function_Embedding_instAddAction(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Function_Embedding_instAddAction___rarg), 2, 0);
return x_4;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Group_Action_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Group_Action_Pi(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Group_Opposite(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Tactic_MinImports(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_GroupTheory_GroupAction_Embedding(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Group_Action_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Group_Action_Pi(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Group_Opposite(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Tactic_MinImports(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
