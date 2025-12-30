// Lean compiler output
// Module: Mathlib.Data.Nat.SuccPred
// Imports: Init Mathlib.Algebra.Order.Group.Nat Mathlib.Algebra.Ring.Nat Mathlib.Algebra.Order.Sub.Unbundled.Basic Mathlib.Algebra.Order.SuccPred Mathlib.Data.Fin.Basic Mathlib.Order.Nat Mathlib.Order.SuccPred.Archimedean
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
LEAN_EXPORT lean_object* l_Nat_instPredOrder;
LEAN_EXPORT lean_object* l_Nat_instPredSubOrder;
LEAN_EXPORT lean_object* l_Nat_instSuccAddOrder___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Nat_instSuccOrder(lean_object*);
LEAN_EXPORT lean_object* l_Nat_instSuccAddOrder(lean_object*);
lean_object* l_Nat_pred___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Nat_instSuccOrder___boxed(lean_object*);
static lean_object* l_Nat_instPredOrder___closed__1;
lean_object* lean_nat_add(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_instSuccOrder(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_unsigned_to_nat(1u);
x_3 = lean_nat_add(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Nat_instSuccOrder___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Nat_instSuccOrder(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Nat_instSuccAddOrder(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_unsigned_to_nat(1u);
x_3 = lean_nat_add(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Nat_instSuccAddOrder___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Nat_instSuccAddOrder(x_1);
lean_dec(x_1);
return x_2;
}
}
static lean_object* _init_l_Nat_instPredOrder___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Nat_pred___boxed), 1, 0);
return x_1;
}
}
static lean_object* _init_l_Nat_instPredOrder() {
_start:
{
lean_object* x_1; 
x_1 = l_Nat_instPredOrder___closed__1;
return x_1;
}
}
static lean_object* _init_l_Nat_instPredSubOrder() {
_start:
{
lean_object* x_1; 
x_1 = l_Nat_instPredOrder___closed__1;
return x_1;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Order_Group_Nat(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Ring_Nat(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Order_Sub_Unbundled_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Order_SuccPred(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Fin_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Order_Nat(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Order_SuccPred_Archimedean(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Data_Nat_SuccPred(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Order_Group_Nat(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Ring_Nat(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Order_Sub_Unbundled_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Order_SuccPred(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Fin_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Order_Nat(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Order_SuccPred_Archimedean(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Nat_instPredOrder___closed__1 = _init_l_Nat_instPredOrder___closed__1();
lean_mark_persistent(l_Nat_instPredOrder___closed__1);
l_Nat_instPredOrder = _init_l_Nat_instPredOrder();
lean_mark_persistent(l_Nat_instPredOrder);
l_Nat_instPredSubOrder = _init_l_Nat_instPredSubOrder();
lean_mark_persistent(l_Nat_instPredSubOrder);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
