// Lean compiler output
// Module: Mathlib.Algebra.Order.ToIntervalMod
// Imports: Init Mathlib.Algebra.ModEq Mathlib.Algebra.Order.Archimedean.Basic Mathlib.Algebra.Ring.Periodic Mathlib.Data.Int.SuccPred Mathlib.Order.Circular
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
LEAN_EXPORT lean_object* l_QuotientAddGroup_circularOrder___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuotientAddGroup_instBtwQuotientAddSubgroupZmultiples(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuotientAddGroup_circularOrder___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuotientAddGroup_circularPreorder(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuotientAddGroup_circularOrder(lean_object*);
LEAN_EXPORT lean_object* l_QuotientAddGroup_circularPreorder___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_QuotientAddGroup_circularPreorder___closed__1;
LEAN_EXPORT lean_object* l_QuotientAddGroup_instBtwQuotientAddSubgroupZmultiples___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_QuotientAddGroup_instBtwQuotientAddSubgroupZmultiples(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_box(0);
return x_6;
}
}
LEAN_EXPORT lean_object* l_QuotientAddGroup_instBtwQuotientAddSubgroupZmultiples___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_QuotientAddGroup_instBtwQuotientAddSubgroupZmultiples(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_2);
return x_6;
}
}
static lean_object* _init_l_QuotientAddGroup_circularPreorder___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = lean_box(0);
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_QuotientAddGroup_circularPreorder(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_QuotientAddGroup_circularPreorder___closed__1;
return x_6;
}
}
LEAN_EXPORT lean_object* l_QuotientAddGroup_circularPreorder___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_QuotientAddGroup_circularPreorder(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_2);
return x_6;
}
}
LEAN_EXPORT lean_object* l_QuotientAddGroup_circularOrder___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_QuotientAddGroup_circularPreorder(lean_box(0), x_1, lean_box(0), x_3, lean_box(0));
return x_5;
}
}
LEAN_EXPORT lean_object* l_QuotientAddGroup_circularOrder(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_QuotientAddGroup_circularOrder___rarg___boxed), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_QuotientAddGroup_circularOrder___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_QuotientAddGroup_circularOrder___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_5;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_ModEq(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Order_Archimedean_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Ring_Periodic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Int_SuccPred(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Order_Circular(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Algebra_Order_ToIntervalMod(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_ModEq(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Order_Archimedean_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Ring_Periodic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Int_SuccPred(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Order_Circular(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_QuotientAddGroup_circularPreorder___closed__1 = _init_l_QuotientAddGroup_circularPreorder___closed__1();
lean_mark_persistent(l_QuotientAddGroup_circularPreorder___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
