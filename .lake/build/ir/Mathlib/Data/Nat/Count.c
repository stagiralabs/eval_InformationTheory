// Lean compiler output
// Module: Mathlib.Data.Nat.Count
// Imports: Init Mathlib.Algebra.Group.Nat.Range Mathlib.Algebra.Order.Ring.Nat Mathlib.SetTheory.Cardinal.Basic
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
LEAN_EXPORT lean_object* l_Nat_count___rarg(lean_object*, lean_object*);
lean_object* l_Multiset_filter___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_CountSet_fintype(lean_object*);
LEAN_EXPORT lean_object* l_List_countP_go___at_Nat_count___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_List_countP_go___at_Nat_count___spec__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_List_range(lean_object*);
lean_object* l_Multiset_pmap___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_count(lean_object*);
lean_object* l_Fintype_subtype___rarg___lambda__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_CountSet_fintype___rarg(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
static lean_object* l_Nat_CountSet_fintype___rarg___closed__1;
LEAN_EXPORT lean_object* l_List_countP_go___at_Nat_count___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_dec(x_1);
return x_3;
}
else
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_4 = lean_ctor_get(x_2, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_2, 1);
lean_inc(x_5);
lean_dec(x_2);
lean_inc(x_1);
x_6 = lean_apply_1(x_1, x_4);
x_7 = lean_unbox(x_6);
lean_dec(x_6);
if (x_7 == 0)
{
x_2 = x_5;
goto _start;
}
else
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_unsigned_to_nat(1u);
x_10 = lean_nat_add(x_3, x_9);
lean_dec(x_3);
x_2 = x_5;
x_3 = x_10;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_List_countP_go___at_Nat_count___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_countP_go___at_Nat_count___spec__1___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Nat_count___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = l_List_range(x_2);
x_4 = lean_unsigned_to_nat(0u);
x_5 = l_List_countP_go___at_Nat_count___spec__1___rarg(x_1, x_3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Nat_count(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Nat_count___rarg), 2, 0);
return x_2;
}
}
static lean_object* _init_l_Nat_CountSet_fintype___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Fintype_subtype___rarg___lambda__1___boxed), 2, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Nat_CountSet_fintype___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_3 = l_List_range(x_2);
x_4 = l_Multiset_filter___rarg(x_1, x_3);
x_5 = l_Nat_CountSet_fintype___rarg___closed__1;
x_6 = l_Multiset_pmap___rarg(x_5, x_4, lean_box(0));
return x_6;
}
}
LEAN_EXPORT lean_object* l_Nat_CountSet_fintype(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Nat_CountSet_fintype___rarg), 2, 0);
return x_2;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Group_Nat_Range(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Order_Ring_Nat(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_SetTheory_Cardinal_Basic(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Data_Nat_Count(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Group_Nat_Range(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Order_Ring_Nat(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_SetTheory_Cardinal_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Nat_CountSet_fintype___rarg___closed__1 = _init_l_Nat_CountSet_fintype___rarg___closed__1();
lean_mark_persistent(l_Nat_CountSet_fintype___rarg___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
