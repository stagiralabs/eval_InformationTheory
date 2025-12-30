// Lean compiler output
// Module: Mathlib.Algebra.Order.Ring.Abs
// Imports: Init Mathlib.Algebra.Order.Group.Abs Mathlib.Algebra.Order.Ring.Basic Mathlib.Algebra.Order.Ring.Int Mathlib.Algebra.Ring.Divisibility.Basic Mathlib.Algebra.Ring.Int.Units Mathlib.Data.Nat.Cast.Order.Ring
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
LEAN_EXPORT lean_object* l___private_Mathlib_Algebra_Order_Ring_Abs_0__geomSum___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_LinearOrderedCommRing_toLinearOrderedCommSemiring___rarg(lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Algebra_Order_Ring_Abs_0__geomSum(lean_object*);
lean_object* l_NonUnitalNonAssocSemiring_toDistrib___rarg(lean_object*);
LEAN_EXPORT lean_object* l_absHom___rarg(lean_object*);
lean_object* l_NonUnitalNonAssocCommRing_toNonUnitalNonAssocCommSemiring___rarg(lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Algebra_Order_Ring_Abs_0____private_Mathlib_Algebra_Order_Ring_Abs_0__geomSum_match__1_splitter___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Algebra_Order_Ring_Abs_0____private_Mathlib_Algebra_Order_Ring_Abs_0__geomSum_match__1_splitter(lean_object*);
lean_object* l_SubNegZeroMonoid_toNegZeroClass___rarg(lean_object*);
LEAN_EXPORT lean_object* l_abs___at_absHom___spec__1(lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Algebra_Order_Ring_Abs_0__geomSum___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Algebra_Order_Ring_Abs_0____private_Mathlib_Algebra_Order_Ring_Abs_0__geomSum_match__1_splitter___rarg___boxed(lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_absHom(lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_LinearOrderedCommSemiring_toLinearOrderedSemiring___rarg(lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_abs___at_absHom___spec__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_abs___at_absHom___spec__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
lean_dec(x_3);
x_5 = l_Ring_toAddGroupWithOne___rarg(x_4);
x_6 = l_AddGroupWithOne_toAddGroup___rarg(x_5);
lean_dec(x_5);
x_7 = l_SubNegZeroMonoid_toNegZeroClass___rarg(x_6);
lean_dec(x_6);
x_8 = lean_ctor_get(x_7, 1);
lean_inc(x_8);
lean_dec(x_7);
lean_inc(x_2);
x_9 = lean_apply_1(x_8, x_2);
x_10 = lean_ctor_get(x_1, 2);
lean_inc(x_10);
lean_dec(x_1);
x_11 = lean_apply_2(x_10, x_2, x_9);
return x_11;
}
}
LEAN_EXPORT lean_object* l_abs___at_absHom___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_abs___at_absHom___spec__1___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_absHom___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_abs___at_absHom___spec__1___rarg), 2, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_absHom(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_absHom___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Algebra_Order_Ring_Abs_0__geomSum___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; uint8_t x_6; 
x_5 = lean_unsigned_to_nat(0u);
x_6 = lean_nat_dec_eq(x_4, x_5);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_7 = lean_unsigned_to_nat(1u);
x_8 = lean_nat_sub(x_4, x_7);
x_9 = lean_ctor_get(x_1, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
lean_dec(x_9);
x_11 = l_CommRing_toNonUnitalCommRing___rarg(x_10);
x_12 = l_NonUnitalNonAssocCommRing_toNonUnitalNonAssocCommSemiring___rarg(x_11);
x_13 = l_NonUnitalNonAssocSemiring_toDistrib___rarg(x_12);
x_14 = lean_ctor_get(x_13, 1);
lean_inc(x_14);
lean_dec(x_13);
x_15 = lean_ctor_get(x_12, 1);
lean_inc(x_15);
lean_dec(x_12);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_16 = l___private_Mathlib_Algebra_Order_Ring_Abs_0__geomSum___rarg(x_1, x_2, x_3, x_8);
x_17 = lean_apply_2(x_15, x_2, x_16);
x_18 = l_LinearOrderedCommRing_toLinearOrderedCommSemiring___rarg(x_1);
x_19 = l_LinearOrderedCommSemiring_toLinearOrderedSemiring___rarg(x_18);
x_20 = lean_ctor_get(x_19, 0);
lean_inc(x_20);
lean_dec(x_19);
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
lean_dec(x_20);
x_22 = lean_nat_add(x_8, x_7);
lean_dec(x_8);
x_23 = lean_ctor_get(x_21, 3);
lean_inc(x_23);
lean_dec(x_21);
x_24 = lean_apply_2(x_23, x_22, x_3);
x_25 = lean_apply_2(x_14, x_17, x_24);
return x_25;
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; 
lean_dec(x_3);
lean_dec(x_2);
x_26 = lean_ctor_get(x_1, 0);
lean_inc(x_26);
lean_dec(x_1);
x_27 = lean_ctor_get(x_26, 0);
lean_inc(x_27);
lean_dec(x_26);
x_28 = l_Ring_toAddGroupWithOne___rarg(x_27);
x_29 = lean_ctor_get(x_28, 1);
lean_inc(x_29);
lean_dec(x_28);
x_30 = lean_ctor_get(x_29, 2);
lean_inc(x_30);
lean_dec(x_29);
return x_30;
}
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Algebra_Order_Ring_Abs_0__geomSum(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Mathlib_Algebra_Order_Ring_Abs_0__geomSum___rarg___boxed), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Algebra_Order_Ring_Abs_0__geomSum___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l___private_Mathlib_Algebra_Order_Ring_Abs_0__geomSum___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Algebra_Order_Ring_Abs_0____private_Mathlib_Algebra_Order_Ring_Abs_0__geomSum_match__1_splitter___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_unsigned_to_nat(0u);
x_5 = lean_nat_dec_eq(x_1, x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_unsigned_to_nat(1u);
x_7 = lean_nat_sub(x_1, x_6);
x_8 = lean_apply_1(x_3, x_7);
return x_8;
}
else
{
lean_dec(x_3);
lean_inc(x_2);
return x_2;
}
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Algebra_Order_Ring_Abs_0____private_Mathlib_Algebra_Order_Ring_Abs_0__geomSum_match__1_splitter(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Mathlib_Algebra_Order_Ring_Abs_0____private_Mathlib_Algebra_Order_Ring_Abs_0__geomSum_match__1_splitter___rarg___boxed), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Algebra_Order_Ring_Abs_0____private_Mathlib_Algebra_Order_Ring_Abs_0__geomSum_match__1_splitter___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l___private_Mathlib_Algebra_Order_Ring_Abs_0____private_Mathlib_Algebra_Order_Ring_Abs_0__geomSum_match__1_splitter___rarg(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Order_Group_Abs(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Order_Ring_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Order_Ring_Int(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Ring_Divisibility_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Ring_Int_Units(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Nat_Cast_Order_Ring(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Algebra_Order_Ring_Abs(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Order_Group_Abs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Order_Ring_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Order_Ring_Int(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Ring_Divisibility_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Ring_Int_Units(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Nat_Cast_Order_Ring(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
