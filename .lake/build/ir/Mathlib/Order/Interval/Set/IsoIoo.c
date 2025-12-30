// Lean compiler output
// Module: Mathlib.Order.Interval.Set.IsoIoo
// Imports: Init Mathlib.Order.Monotone.Odd Mathlib.Algebra.Order.Field.Basic Mathlib.Tactic.FieldSimp
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
lean_object* l_CommRing_toNonUnitalCommRing___rarg(lean_object*);
lean_object* l_AddGroupWithOne_toAddGroup___rarg(lean_object*);
lean_object* l_Ring_toAddGroupWithOne___rarg(lean_object*);
LEAN_EXPORT lean_object* l_abs___at_orderIsoIooNegOneOne___spec__1___rarg(lean_object*, lean_object*);
lean_object* l_NonUnitalNonAssocSemiring_toDistrib___rarg(lean_object*);
LEAN_EXPORT lean_object* l_orderIsoIooNegOneOne(lean_object*);
LEAN_EXPORT lean_object* l_StrictMono_orderIsoOfRightInverse___at_orderIsoIooNegOneOne___spec__3___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_NonUnitalNonAssocCommRing_toNonUnitalNonAssocCommSemiring___rarg(lean_object*);
LEAN_EXPORT lean_object* l_StrictMono_orderIsoOfRightInverse___at_orderIsoIooNegOneOne___spec__3___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_abs___at_orderIsoIooNegOneOne___spec__2___rarg(lean_object*, lean_object*);
lean_object* l_SubNegZeroMonoid_toNegZeroClass___rarg(lean_object*);
LEAN_EXPORT lean_object* l_orderIsoIooNegOneOne___rarg___lambda__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_abs___at_orderIsoIooNegOneOne___spec__2(lean_object*);
LEAN_EXPORT lean_object* l_orderIsoIooNegOneOne___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_orderIsoIooNegOneOne___rarg(lean_object*);
LEAN_EXPORT lean_object* l_StrictMono_orderIsoOfRightInverse___at_orderIsoIooNegOneOne___spec__3(lean_object*, lean_object*);
lean_object* l_Set_codRestrict___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_abs___at_orderIsoIooNegOneOne___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_abs___at_orderIsoIooNegOneOne___spec__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
lean_dec(x_1);
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
lean_dec(x_4);
x_6 = l_Ring_toAddGroupWithOne___rarg(x_5);
x_7 = l_AddGroupWithOne_toAddGroup___rarg(x_6);
lean_dec(x_6);
x_8 = l_SubNegZeroMonoid_toNegZeroClass___rarg(x_7);
lean_dec(x_7);
x_9 = lean_ctor_get(x_8, 1);
lean_inc(x_9);
lean_dec(x_8);
lean_inc(x_2);
x_10 = lean_apply_1(x_9, x_2);
x_11 = lean_ctor_get(x_3, 2);
lean_inc(x_11);
lean_dec(x_3);
x_12 = lean_apply_2(x_11, x_2, x_10);
return x_12;
}
}
LEAN_EXPORT lean_object* l_abs___at_orderIsoIooNegOneOne___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_abs___at_orderIsoIooNegOneOne___spec__1___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_abs___at_orderIsoIooNegOneOne___spec__2___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
lean_dec(x_1);
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
lean_dec(x_4);
x_6 = l_Ring_toAddGroupWithOne___rarg(x_5);
x_7 = l_AddGroupWithOne_toAddGroup___rarg(x_6);
lean_dec(x_6);
x_8 = l_SubNegZeroMonoid_toNegZeroClass___rarg(x_7);
lean_dec(x_7);
x_9 = lean_ctor_get(x_8, 1);
lean_inc(x_9);
lean_dec(x_8);
lean_inc(x_2);
x_10 = lean_apply_1(x_9, x_2);
x_11 = lean_ctor_get(x_3, 2);
lean_inc(x_11);
lean_dec(x_3);
x_12 = lean_apply_2(x_11, x_2, x_10);
return x_12;
}
}
LEAN_EXPORT lean_object* l_abs___at_orderIsoIooNegOneOne___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_abs___at_orderIsoIooNegOneOne___spec__2___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_StrictMono_orderIsoOfRightInverse___at_orderIsoIooNegOneOne___spec__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_1);
lean_ctor_set(x_5, 1, x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_StrictMono_orderIsoOfRightInverse___at_orderIsoIooNegOneOne___spec__3(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_StrictMono_orderIsoOfRightInverse___at_orderIsoIooNegOneOne___spec__3___rarg), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_orderIsoIooNegOneOne___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_4 = lean_ctor_get(x_1, 2);
lean_inc(x_4);
x_5 = lean_ctor_get(x_2, 0);
lean_inc(x_5);
lean_dec(x_2);
lean_inc(x_5);
x_6 = l_CommRing_toNonUnitalCommRing___rarg(x_5);
x_7 = l_NonUnitalNonAssocCommRing_toNonUnitalNonAssocCommSemiring___rarg(x_6);
x_8 = l_NonUnitalNonAssocSemiring_toDistrib___rarg(x_7);
lean_dec(x_7);
x_9 = lean_ctor_get(x_8, 1);
lean_inc(x_9);
lean_dec(x_8);
x_10 = l_Ring_toAddGroupWithOne___rarg(x_5);
x_11 = lean_ctor_get(x_10, 1);
lean_inc(x_11);
lean_dec(x_10);
x_12 = lean_ctor_get(x_11, 2);
lean_inc(x_12);
lean_dec(x_11);
lean_inc(x_3);
x_13 = l_abs___at_orderIsoIooNegOneOne___spec__1___rarg(x_1, x_3);
x_14 = lean_apply_2(x_9, x_12, x_13);
x_15 = lean_apply_2(x_4, x_3, x_14);
return x_15;
}
}
LEAN_EXPORT lean_object* l_orderIsoIooNegOneOne___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_4 = lean_ctor_get(x_1, 2);
lean_inc(x_4);
x_5 = lean_ctor_get(x_2, 0);
lean_inc(x_5);
lean_dec(x_2);
x_6 = l_Ring_toAddGroupWithOne___rarg(x_5);
x_7 = l_AddGroupWithOne_toAddGroup___rarg(x_6);
x_8 = lean_ctor_get(x_7, 2);
lean_inc(x_8);
lean_dec(x_7);
x_9 = lean_ctor_get(x_6, 1);
lean_inc(x_9);
lean_dec(x_6);
x_10 = lean_ctor_get(x_9, 2);
lean_inc(x_10);
lean_dec(x_9);
lean_inc(x_3);
x_11 = l_abs___at_orderIsoIooNegOneOne___spec__2___rarg(x_1, x_3);
x_12 = lean_apply_2(x_8, x_10, x_11);
x_13 = lean_apply_2(x_4, x_3, x_12);
return x_13;
}
}
LEAN_EXPORT lean_object* l_orderIsoIooNegOneOne___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
lean_dec(x_2);
lean_inc(x_3);
lean_inc(x_1);
x_4 = lean_alloc_closure((void*)(l_orderIsoIooNegOneOne___rarg___lambda__1), 3, 2);
lean_closure_set(x_4, 0, x_1);
lean_closure_set(x_4, 1, x_3);
x_5 = lean_alloc_closure((void*)(l_Set_codRestrict___rarg), 4, 3);
lean_closure_set(x_5, 0, x_4);
lean_closure_set(x_5, 1, lean_box(0));
lean_closure_set(x_5, 2, lean_box(0));
x_6 = lean_alloc_closure((void*)(l_orderIsoIooNegOneOne___rarg___lambda__2), 3, 2);
lean_closure_set(x_6, 0, x_1);
lean_closure_set(x_6, 1, x_3);
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_5);
lean_ctor_set(x_7, 1, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_orderIsoIooNegOneOne(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_orderIsoIooNegOneOne___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_StrictMono_orderIsoOfRightInverse___at_orderIsoIooNegOneOne___spec__3___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_StrictMono_orderIsoOfRightInverse___at_orderIsoIooNegOneOne___spec__3(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Order_Monotone_Odd(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Order_Field_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Tactic_FieldSimp(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Order_Interval_Set_IsoIoo(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Order_Monotone_Odd(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Order_Field_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Tactic_FieldSimp(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
