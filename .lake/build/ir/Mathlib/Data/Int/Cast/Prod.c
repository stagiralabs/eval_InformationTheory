// Lean compiler output
// Module: Mathlib.Data.Int.Cast.Prod
// Imports: Init Mathlib.Data.Nat.Cast.Prod
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
LEAN_EXPORT lean_object* l_Prod_instAddGroupWithOne(lean_object*, lean_object*);
lean_object* l_AddGroupWithOne_toAddGroup___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Prod_instAddGroupWithOne___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
lean_object* l_Prod_instAddMonoidWithOne___rarg(lean_object*, lean_object*);
lean_object* l_Prod_subNegMonoid___rarg(lean_object*, lean_object*);
lean_object* l_Prod_subNegMonoid___elambda__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Prod_instAddGroupWithOne___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Prod_instAddGroupWithOne___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
lean_inc(x_3);
x_5 = lean_apply_1(x_4, x_3);
x_6 = lean_ctor_get(x_2, 0);
lean_inc(x_6);
lean_dec(x_2);
x_7 = lean_apply_1(x_6, x_3);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_5);
lean_ctor_set(x_8, 1, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Prod_instAddGroupWithOne___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_3 = lean_ctor_get(x_1, 1);
lean_inc(x_3);
x_4 = lean_ctor_get(x_2, 1);
lean_inc(x_4);
x_5 = l_Prod_instAddMonoidWithOne___rarg(x_3, x_4);
x_6 = l_AddGroupWithOne_toAddGroup___rarg(x_1);
x_7 = l_AddGroupWithOne_toAddGroup___rarg(x_2);
lean_inc(x_7);
lean_inc(x_6);
x_8 = l_Prod_subNegMonoid___rarg(x_6, x_7);
x_9 = lean_alloc_closure((void*)(l_Prod_instAddGroupWithOne___rarg___lambda__1), 3, 2);
lean_closure_set(x_9, 0, x_1);
lean_closure_set(x_9, 1, x_2);
x_10 = lean_ctor_get(x_8, 1);
lean_inc(x_10);
x_11 = lean_ctor_get(x_8, 2);
lean_inc(x_11);
lean_dec(x_8);
x_12 = lean_alloc_closure((void*)(l_Prod_subNegMonoid___elambda__1___rarg), 4, 2);
lean_closure_set(x_12, 0, x_6);
lean_closure_set(x_12, 1, x_7);
x_13 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_13, 0, x_9);
lean_ctor_set(x_13, 1, x_5);
lean_ctor_set(x_13, 2, x_10);
lean_ctor_set(x_13, 3, x_11);
lean_ctor_set(x_13, 4, x_12);
return x_13;
}
}
LEAN_EXPORT lean_object* l_Prod_instAddGroupWithOne(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Prod_instAddGroupWithOne___rarg), 2, 0);
return x_3;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Nat_Cast_Prod(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Data_Int_Cast_Prod(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Nat_Cast_Prod(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
