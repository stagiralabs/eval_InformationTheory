// Lean compiler output
// Module: Mathlib.Data.Finite.Prod
// Imports: Init Mathlib.Data.Set.Finite.Basic Mathlib.Data.Fintype.Prod Mathlib.Data.Fintype.Pi Mathlib.Algebra.Order.Group.Multiset Mathlib.Data.Vector.Basic Mathlib.Tactic.ApplyFun Mathlib.Data.ULift Mathlib.Data.Set.NAry
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
LEAN_EXPORT lean_object* l_Set_fintypeImage2___rarg___lambda__1(lean_object*, lean_object*);
lean_object* l_Set_fintypeImage___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Finset_offDiag___rarg(lean_object*, lean_object*);
lean_object* l_Multiset_map___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Set_fintypeProd___rarg(lean_object*, lean_object*);
lean_object* l_Multiset_pmap___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Set_fintypeOffDiag___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Set_fintypeImage2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Set_fintypeOffDiag(lean_object*);
LEAN_EXPORT lean_object* l_Set_fintypeImage2(lean_object*, lean_object*, lean_object*);
lean_object* l_Fintype_subtype___rarg___lambda__1___boxed(lean_object*, lean_object*);
static lean_object* l_Set_fintypeProd___rarg___closed__1;
LEAN_EXPORT lean_object* l_Set_fintypeProd(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Multiset_product___rarg(lean_object*, lean_object*);
static lean_object* l_Set_fintypeProd___rarg___closed__2;
lean_object* l_Function_Embedding_subtype___elambda__1___rarg___boxed(lean_object*);
static lean_object* _init_l_Set_fintypeProd___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Function_Embedding_subtype___elambda__1___rarg___boxed), 1, 0);
return x_1;
}
}
static lean_object* _init_l_Set_fintypeProd___rarg___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Fintype_subtype___rarg___lambda__1___boxed), 2, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Set_fintypeProd___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_3 = l_Set_fintypeProd___rarg___closed__1;
x_4 = l_Multiset_map___rarg(x_3, x_1);
x_5 = l_Multiset_map___rarg(x_3, x_2);
x_6 = l_Multiset_product___rarg(x_4, x_5);
x_7 = l_Set_fintypeProd___rarg___closed__2;
x_8 = l_Multiset_pmap___rarg(x_7, x_6, lean_box(0));
return x_8;
}
}
LEAN_EXPORT lean_object* l_Set_fintypeProd(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_Set_fintypeProd___rarg), 2, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Set_fintypeOffDiag___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_4 = l_Set_fintypeProd___rarg___closed__1;
x_5 = l_Multiset_map___rarg(x_4, x_3);
x_6 = l_Finset_offDiag___rarg(x_1, x_5);
x_7 = l_Set_fintypeProd___rarg___closed__2;
x_8 = l_Multiset_pmap___rarg(x_7, x_6, lean_box(0));
return x_8;
}
}
LEAN_EXPORT lean_object* l_Set_fintypeOffDiag(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Set_fintypeOffDiag___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Set_fintypeImage2___rarg___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_2, 1);
lean_inc(x_4);
lean_dec(x_2);
x_5 = lean_apply_2(x_1, x_3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Set_fintypeImage2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_7 = lean_alloc_closure((void*)(l_Set_fintypeImage2___rarg___lambda__1), 2, 1);
lean_closure_set(x_7, 0, x_2);
x_8 = l_Set_fintypeProd___rarg(x_5, x_6);
x_9 = l_Set_fintypeImage___rarg(x_1, lean_box(0), x_7, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Set_fintypeImage2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Set_fintypeImage2___rarg), 6, 0);
return x_4;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Set_Finite_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Fintype_Prod(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Fintype_Pi(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Order_Group_Multiset(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Vector_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Tactic_ApplyFun(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_ULift(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Set_NAry(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Data_Finite_Prod(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Set_Finite_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Fintype_Prod(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Fintype_Pi(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Order_Group_Multiset(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Vector_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Tactic_ApplyFun(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_ULift(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Set_NAry(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Set_fintypeProd___rarg___closed__1 = _init_l_Set_fintypeProd___rarg___closed__1();
lean_mark_persistent(l_Set_fintypeProd___rarg___closed__1);
l_Set_fintypeProd___rarg___closed__2 = _init_l_Set_fintypeProd___rarg___closed__2();
lean_mark_persistent(l_Set_fintypeProd___rarg___closed__2);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
