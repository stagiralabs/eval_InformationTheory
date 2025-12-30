// Lean compiler output
// Module: Mathlib.Algebra.Order.Disjointed
// Imports: Init Mathlib.Algebra.Order.PartialSups Mathlib.Data.Nat.SuccPred Mathlib.Order.Disjointed
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
lean_object* l_partialSups___elambda__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_disjointedRec___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Data_Nat_Basic_0__Nat_recCompiled___rarg(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Nat_instLocallyFiniteOrder;
lean_object* l_GeneralizedBooleanAlgebra_toGeneralizedCoheytingAlgebra___rarg(lean_object*);
extern lean_object* l_Nat_instPreorder;
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
static lean_object* l_Nat_disjointedRec___rarg___lambda__1___closed__1;
LEAN_EXPORT lean_object* l_Nat_disjointedRec___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Nat_instOrderBot;
LEAN_EXPORT lean_object* l_Nat_disjointedRec(lean_object*);
lean_object* l_Finset_LocallyFiniteOrder_toLocallyFiniteOrderBot___rarg(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_disjointedRec___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* _init_l_Nat_disjointedRec___rarg___lambda__1___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Nat_instPreorder;
x_2 = l_Nat_instOrderBot;
x_3 = l_Nat_instLocallyFiniteOrder;
x_4 = l_Finset_LocallyFiniteOrder_toLocallyFiniteOrderBot___rarg(x_1, x_2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Nat_disjointedRec___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_7 = lean_ctor_get(x_1, 1);
lean_inc(x_7);
x_8 = l_GeneralizedBooleanAlgebra_toGeneralizedCoheytingAlgebra___rarg(x_1);
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
lean_dec(x_8);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
lean_dec(x_9);
x_11 = l_Nat_instPreorder;
x_12 = l_Nat_disjointedRec___rarg___lambda__1___closed__1;
lean_inc(x_5);
x_13 = l_partialSups___elambda__1___rarg(x_10, x_11, x_12, x_2, x_5);
x_14 = lean_apply_2(x_7, x_3, x_13);
x_15 = lean_unsigned_to_nat(1u);
x_16 = lean_nat_add(x_5, x_15);
lean_dec(x_5);
x_17 = lean_apply_3(x_4, x_14, x_16, x_6);
return x_17;
}
}
LEAN_EXPORT lean_object* l_Nat_disjointedRec___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; uint8_t x_8; 
x_7 = lean_unsigned_to_nat(0u);
x_8 = lean_nat_dec_eq(x_5, x_7);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_9 = lean_unsigned_to_nat(1u);
x_10 = lean_nat_sub(x_5, x_9);
x_11 = lean_nat_add(x_10, x_9);
lean_inc(x_2);
x_12 = lean_apply_1(x_2, x_11);
lean_inc(x_4);
lean_inc(x_12);
x_13 = lean_apply_3(x_4, x_12, x_7, x_6);
x_14 = lean_alloc_closure((void*)(l_Nat_disjointedRec___rarg___lambda__1), 6, 4);
lean_closure_set(x_14, 0, x_1);
lean_closure_set(x_14, 1, x_2);
lean_closure_set(x_14, 2, x_12);
lean_closure_set(x_14, 3, x_4);
x_15 = l___private_Init_Data_Nat_Basic_0__Nat_recCompiled___rarg(x_13, x_14, x_10);
lean_dec(x_10);
lean_dec(x_13);
return x_15;
}
else
{
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
}
LEAN_EXPORT lean_object* l_Nat_disjointedRec(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Nat_disjointedRec___rarg___boxed), 6, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Nat_disjointedRec___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Nat_disjointedRec___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
return x_7;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Order_PartialSups(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Nat_SuccPred(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Order_Disjointed(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Algebra_Order_Disjointed(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Order_PartialSups(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Nat_SuccPred(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Order_Disjointed(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Nat_disjointedRec___rarg___lambda__1___closed__1 = _init_l_Nat_disjointedRec___rarg___lambda__1___closed__1();
lean_mark_persistent(l_Nat_disjointedRec___rarg___lambda__1___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
